echo "enter first number: "
read a
echo "enter second number: "
read b

if [ $a -gt $b ]
then
  echo "first number is greater than the second"
else
  echo "second number is greater than the first"
fi
