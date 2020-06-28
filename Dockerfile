FROM ubuntu:bionic-20200403 as builder

RUN apt-get update
RUN apt-get install -y default-jdk cmake g++ git pkg-config uuid-dev

USER ${UID}:${GID}

WORKDIR /usr/src/m3uparser

COPY . .

RUN ./build.sh

FROM ubuntu:bionic-20200403 as runner

USER ${UID}:${GID}

WORKDIR /usr/src/m3uparser

RUN mkdir -p ./source
RUN mkdir -p ./destination

COPY --from=builder /usr/src/m3uparser/bin/PlaylistParser ./PlaylistParser

ENTRYPOINT [ "./PlaylistParser" ]
