import random
import sys

mean=float(sys.argv[1])

standard_dev=float(sys.argv[2])

n=[random.gauss(mean,standard_dev),0]

print "%.4f" % max(n)  
