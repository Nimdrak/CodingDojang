import re

pc = lambda src: re.sub("([A-Z0-9])", lambda m:"_"+m.group().lower(), src)

print(pc("codingDojang"))
print(pc("numGoat30"))
