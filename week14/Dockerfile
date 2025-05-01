FROM ubuntu:22.04

ARG USER=remote-user
ENV DEBIAN_FRONTEND=noninteractive
# ENV TZ=Europe/London

RUN apt update && apt install -y vim openssh-server sudo byobu && apt clean && apt autoremove && rm -rf /var/log/*
RUN useradd ${USER} -m -s /usr/bin/bash && usermod -a -G sudo ${USER} && mkdir -p /run/sshd

EXPOSE 22

CMD ["/usr/sbin/sshd", "-D"]
