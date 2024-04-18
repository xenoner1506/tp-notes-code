FROM ubuntu:22.04

RUN echo $USER

ARG USER=test
ARG DEBIAN_FRONTEND=noninteractive
ENV MYVAR value-of-my-var
MAINTAINER User 'example@example.com'

RUN groupadd -r $USER \
  && useradd -r -g $USER $USER

RUN mkdir /vol0 && chown $USER:$USER /vol0 && \
    mkdir /vol1 && chown $USER:$USER /vol1

VOLUME vol0 vol1
USER $USER

