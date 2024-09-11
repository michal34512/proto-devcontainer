FROM ubuntu:20.04

ARG DEBIAN_FRONTEND=nointeractive
ARG CONTAINER_USER=proto
ARG USER_UID=1000
ARG USER_GID=$USER_UID

RUN apt-get update \
	&& apt install -y -q \
	cmake \
	git \
	hwdata \
	linux-tools-virtual \
	udev \
	sudo \
	clang \
	protobuf-compiler \
	&& apt-get autoremove -y \
    && apt-get clean -y \
	&& rm -rf /var/lib/apt/lists/*

ENV LC_ALL=C.UTF-8
ENV LANG=C.UTF-8

RUN groupadd --gid $USER_GID $CONTAINER_USER \
	&& adduser --uid $USER_UID --gid $USER_GID --disabled-password --gecos "" ${CONTAINER_USER} \
	&& usermod -a -G root $CONTAINER_USER && usermod -a -G dialout $CONTAINER_USER \
    && echo $CONTAINER_USER ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$CONTAINER_USER \
    && chmod 0440 /etc/sudoers.d/$CONTAINER_USER