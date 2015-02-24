#!/bin/bash

result=$(echo 'sqrt(1020304050607080900)' | bc)

while [[ true ]]
do
	square=$(($result * $result))

	echo $square

	if [[
		${square:0 :1} -eq 1 &&
		${square:2 :1} -eq 2 &&
		${square:4 :1} -eq 3 &&
		${square:6 :1} -eq 4 &&
		${square:8 :1} -eq 5 &&
		${square:10:1} -eq 6 &&
		${square:12:1} -eq 7 &&
		${square:14:1} -eq 8 &&
		${square:16:1} -eq 9 &&
		${square:18:1} -eq 0
	]]
	then
		break
	fi

	# Since result^2 ends with 0, result is divisable by 10
	result=$(($result + 10))
done

echo $result