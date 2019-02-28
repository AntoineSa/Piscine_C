#!/bin/sh
echo $(find . -type f -o -type d -not -path ‘*/\.*’ | wc -l)
