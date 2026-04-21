FROM python

WORKDIR /app

RUN apt-get update && apt-get install -y \
    iputils-ping \
    net-tools \
    tcpdump \
    && rm -rf /var/lib/apt/lists/*

RUN pip install scapy
