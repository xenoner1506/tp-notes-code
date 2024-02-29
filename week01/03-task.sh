read -p "Enter your login: " login
read -sp "Enter your password: " password

if [ $password ]
then
  echo "YOUR PASSWORD MUST NOT BE EMPTY"
fi

if [ "$login" == "$password" ]
then
  echo "BAD PASSWORD; IT MUST NOT BE YOUR LOGIN"
fi

if [ "$password" == "secret" ]
then
  echo "GOOD PASSWORD"
fi


