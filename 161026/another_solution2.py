def to_pathole(s):
	res=''
	for c in s:
		if c.isupper():c='_'+c.lower()
		elif c.isdigit():c='_'+c
		res += c
	return res

print to_pathole('codingDojang')
print to_pathole('numGoat30')
