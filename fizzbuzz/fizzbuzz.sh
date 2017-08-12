for i in `seq 1 100`; do
  !((i%3)) && printf Fizz;
  !((i%5)) && printf Buzz;
  ! !((i%5))&&! !((i%3)) && printf $i;
  echo
done
