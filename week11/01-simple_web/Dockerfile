FROM ubuntu:22.04

MAINTAINER User 'example@example.com'

RUN apt update -y
RUN apt install -y python3-pip python3-dev
COPY . /app
WORKDIR /app
RUN pip install -r requirements.txt

EXPOSE 5000
EXPOSE 5123
EXPOSE 5124
EXPOSE 5125

CMD ["python3", "./app.py"]
