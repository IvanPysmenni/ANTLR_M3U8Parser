#!/bin/bash

set -e

RUN_ONLY=$1

if [ -z ${RUN_ONLY} ] || [ ! ${RUN_ONLY} = "run-only" ]; then
    docker build -t m3uparser:latest .
fi

mkdir -p docker_result

docker  run \
        --rm \
        -it \
        --network=host \
        -v $(pwd)/test_src/:/usr/src/m3uparser/source/ \
        -v $(pwd)/docker_result/:/usr/src/m3uparser/destination/ \
        --name=m3u8parser \
        m3uparser:latest \
        -s ./source/simple-playlist.m3u8 \
        -d ./destination/playlist.json

