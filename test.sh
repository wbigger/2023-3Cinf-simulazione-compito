echo "Running tests..."
echo

output=$(./a.out)

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

echo
echo "All tests passed."

exit 0