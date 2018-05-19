
# encoding: utf-8  

# def do(traces, rows, cols):
#   from matplotlib import pyplot as plt  
#   import numpy as np
#     plt.ion()
#     xs = []
#     ys = []
#     for trace in traces:
#         for p in trace:
#             #xs.append(p.col)
#             #ys.append(rows-p.row)
#             #plt.cla()
#             plt.scatter([p.col], [rows-p.row], c='black', s=1)
#             plt.xlim((0, cols))
#             plt.ylim((0, rows))
#             plt.axis('off')
#             plt.pause(0.001)
import time

def do(traces, rows, cols, speed=0):
    import turtle

    turtle.pensize(2)
    turtle.up()
    turtle.speed(speed)
    #add by lijie 2018.5.19
    #turtle.Turtle().screen.delay(0)
    turtle.delay(0)
    #这句可以加快画图速度
    #除此之外speed=0，速度最快；10--->fast；6--->normal;3--->slow
    #1--->slowest    
    
    for trace in traces:
        for p in trace:
            x = p.col - cols/2
            y = rows-p.row -rows/2
            turtle.goto(x, y)
            turtle.down()
            turtle.goto(x, y)
            turtle.up()

#图片保存,无法用
#img.save('./save/lijie.jpg')
#ts = turtle.getscreen()
#ts.getcanvas().postscript(file="duck.jpg")

