# -d bridge/host/none
docker network create -d bridge mynetwork
docker run --rm --net mynetwork --name server -d nicolaka/netshoot sleep 1000
docker run --rm --net mynetwork --name client -d nicolaka/netshoot sleep 1000


docker network create -d bridge mynetwork2
docker network connect mynetwork2 server
# docker network connect mynetwork2 client
