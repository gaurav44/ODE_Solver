import numpy as np
import matplotlib.pyplot as plt
import csv
import math

t = np.loadtxt("time",usecols=range(1),dtype = np.float64)
filename = open('y_out')
csvReader = list(csv.reader(filename, delimiter=','))
row = len(csvReader)
col = len(csvReader[0]) - 1
sol = np.zeros((row,col))
# print(csvReader[0][0])
for i in range(0,row,1):
    for j in range(0,col,1):
        sol[i,j] = csvReader[i][j]           

plt.plot(t,sol[:,0])           
plt.plot(t,sol[:,1])           #comment this for dahlquist 
# plt.plot(sol[:,0],sol[:,1])  # uncomment this for vdpo
plt.show()