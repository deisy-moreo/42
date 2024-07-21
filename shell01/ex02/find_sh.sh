#!/bin/bash
# find . -type f -name "*.sh" | sed 's/\.sh$//'
find . -type f -name "*.sh" -exec basename {} .sh \;

