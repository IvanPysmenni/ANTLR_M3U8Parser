#!/bin/bash

set -e

mkdir -p bin
mkdir -p build
cd build
cmake ..
make
