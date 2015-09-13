def gen(n):
	return 1 - n + n**2 - n**3 + n**4 - n**5 + n**6 - n**7 + n**8 - n**9 + n**10

def next_term(terms):
	buff = [terms,]
	while len(buff[-1])>1:
		buff.append([y-x for (x, y) in zip(buff[-1], buff[-1][1:])])
	return sum(b[-1] for b in buff)

print sum(next_term([gen(n) for n in xrange(1, i+2)]) for i in xrange(10))