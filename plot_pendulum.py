import numpy as np
import matplotlib.pyplot as plt
import csv
import math
from matplotlib.animation import FuncAnimation

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
point1 = [0,0]           
X = np.sin(sol[:,0])
Y = -np.cos(sol[:,0])

fig = plt.figure()
ax = plt.axes(xlim=(-1, 1), ylim=(-2,0))
line, = ax.plot([], [], lw=3)
dot, = ax.plot([],[],'.',markersize=15, zorder=1)
trace, = ax.plot([],[], color='gray', linewidth=1, alpha=0.8)


def init():
    line.set_data([0,X[0]], [0,Y[0]])
    dot.set_data(X[0],Y[0])
    trace.set_data(X[:0],Y[:0])
    return line,

def animate(i):
    line.set_data([0,X[i]],[0,Y[i]])
    dot.set_data(X[i],Y[i])
    trace.set_data(X[:i],Y[:i])
    return (line, dot)

anim = FuncAnimation(fig, animate, init_func=init,
                               frames=601, interval=20, blit=True)

# anim.save('pend.gif', writer='imagemagick')
plt.show()