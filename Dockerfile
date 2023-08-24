FROM ubuntu:latest

RUN apt update
RUN apt update --fix-missing
RUN apt install -y clang

COPY src/run.sh /run.sh

ENTRYPOINT [ "bash", "run.sh" ]
