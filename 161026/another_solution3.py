def do(l):
	a = "ABCDEFGHIJKLMNOPQRSTUBWXYZ0123456789"
	return "".join(["_" + c.lower() if c in a else c for c in l])

print(do('numGoat30'))
