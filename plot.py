import numpy as np
import matplotlib.pyplot as plt

t = np.loadtxt("time",usecols=range(1),dtype = np.float64)
y = np.loadtxt("y_out",usecols=range(1),dtype = np.float64)

plt.plot(t,y)
plt.xlabel('t')
plt.ylabel('y')
plt.show()