#!/bin/bash
echo "**********************"
echo "Builds app and app.exe"
echo "v1.1                  "
echo "**********************"
make -f Makefile clean
make -f Makefile
make -f MakefileWindows clean
make -f MakefileWindows
echo "Run with ./app on Linux or"
echo "app.exe on Windows"

