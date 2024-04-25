docker run --rm -v /var/lib/mysql --name anonymous-volume mysql:8
docker run --rm -v ./data:/var/lib/mysql --name host-volume mysql:8
docker run --rm -v mysql-data:/var/lib/mysql --name named-volume mysql:8
