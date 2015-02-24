import math

result = long(math.sqrt(1020304050607080900))

while True:
	if str(result * result)[::2] == '1234567890':
		break
	result += 10 # Since result^2 ends with 0, result is divisable by 10

print(result)