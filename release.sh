#!/bin/bash

set -e  # Exit on error

if [ $# -ne 1 ]; then
    echo "Usage: $0 <new_version>"
    exit 1
fi

NEW_VERSION=$1

echo "Releasing version $NEW_VERSION"

# Update package.json
jq --arg v "$NEW_VERSION" '.version = $v' package.json > package.json.tmp && mv package.json.tmp package.json

# Update Cargo.toml
sed -i.bak "s/^version = \".*\"/version = \"$NEW_VERSION\"/" Cargo.toml && rm Cargo.toml.bak

# Update tree-sitter.json
jq --arg v "$NEW_VERSION" '.metadata.version = $v' tree-sitter.json > tree-sitter.json.tmp && mv tree-sitter.json.tmp tree-sitter.json

# Get current branch
BRANCH=$(git branch --show-current)

# Commit changes
git add package.json Cargo.toml tree-sitter.json
git commit -m "Release v$NEW_VERSION"

# Tag
git tag v$NEW_VERSION

# Push branch and tag
git push origin $BRANCH
git push origin v$NEW_VERSION

# Create GitHub release (triggers CI/CD workflows)
gh release create v$NEW_VERSION --title "Release v$NEW_VERSION" --notes ""

echo "Release v$NEW_VERSION completed successfully!"
