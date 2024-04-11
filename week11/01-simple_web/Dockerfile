FROM ubuntu:22.04

MAINTAINER User 'example@example.com'

RUN apt-get update -y
RUN apt-get install -y python3-pip python3-dev build-essential
COPY . /app
WORKDIR /app 
RUN pip install -r requirements.txt

EXPOSE 5000

CMD ["python3",  "./app.py"]
