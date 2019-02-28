#!/bin/sh
Branch=$(git rev-parse --show-toplevel)
find $Branch -type f | git check-ignore --stdin | rev | cut -d '/' -f 1 | rev
