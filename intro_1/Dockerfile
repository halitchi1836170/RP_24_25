FROM ubuntu:latest
LABEL authors="halit"

RUN apt-get update && \
    apt-get -y upgrade && \
    apt-get -y install cmake && \
    apt-get -y install g++ && \
    apt-get clean && rm -rf /var/lib/apt/lists/*


copy ./ /app/intro_1

CMD ["/bin/bash"]