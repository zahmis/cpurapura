import tkinter as tk
#import numpy as np
import random

root = tk.Tk()
f = tk.Frame(root)
f.grid()
count = 0
CM = 12
RW = 20

game_window = [[2] * CM for i in range(RW)]
for i in range(RW - 3):
    game_window[i][2:CM - 2] = [0]*(CM - 4)

class tetris():

    def __init__(self , CM , RW ,*game_window):
        self.label_name = [ "Label"+str(n) for n in range(RW * CM) ]
        self.blank =[[0]*4 for i in range(4)]
        self.cm = CM
        self.rw = RW
        self.cur_window = []
        self.cur_window.extend(*game_window)
        self.cur_ad = [0 , 0]
        cur_block = []
        cur_block.extend(self.blank)

    def square(self):
        block = [[0]*4 for i in range(4)]
        block[1][1 : 3] = [1 , 1]
        block[2][1 : 3] = [1 , 1]
        return block

    def pole(self):
        block = [[0]*4 for i in range(4)]
        block[1][0 : 4] = [1 , 1 , 1 ,1]
        return block

    def rot_func(self , *block):
        block_temp = [[0]*4 for i in range(4)]
        for i in range(4):
           for j in range(4):
                block_temp[i][j] = block[3 - j][i]
        return block_temp

    def mk_block(self):
        self.cur_ad = [0 , 4]
        rdm = random.randint(0,1)
        if rdm == 0 :
            self.cur_block = ts.square()
        elif rdm == 1 :
            self.cur_block = ts.pole()
        rdm = random.randint(0 , 3)
        for i in range(rdm):
            self.cur_block = ts.rot_func(*self.cur_block)

    def fall_func(self):
        global after_id
        pos = self.cur_ad[0] + 1
        flag = 0
        for i in range(4):
            for j in range(4):
                flag += self.cur_block[i][j] * self.cur_window[i + pos][j + self.cur_ad[1]]     
        if flag == 0:
            self.cur_ad[0] = pos
        return flag

    def rmv(self , event):
        flag = 0
        pos = self.cur_ad[1] + 1
        for i in range(4):
            for j in range(4):
                flag += self.cur_block[i][j] * self.cur_window[i + self.cur_ad[0]][j + pos]     
        if flag == 0:
            self.cur_ad[1] = pos
            ts.drow_block()

#    def lmv(self , event):


#    def fmv(self , event):



    def rrmv(self , event):
        temp_block = []
        temp_block += ts.rot_func(*self.cur_block)
        flag = 0
        for i in range(4):
            for j in range(4):
                flag += temp_block[i][j] * self.cur_window[i + self.cur_ad[0]][j + self.cur_ad[1]]     
        if flag == 0:
            self.cur_block[i][j] = temp_block
            ts.drow_block()

    def lrmv(self , event):
        temp_block = []
        temp_block += ts.rot_func(*ts.rot_func(*ts.rot_func(*self.cur_block)))
        flag = 0
        for i in range(4):
            for j in range(4):
                flag += temp_block[i][j] * self.cur_window[i + self.cur_ad[0]][j + self.cur_ad[1]]     
        if flag == 0:
            self.cur_block[i][j] = temp_block

    def drow_block(self):
        color_arry = ["gray" , "yellow" , "black"]
        for i in range(self.rw):
            for j in range(self.cm):
                self.label_name[i + j * self.rw].config(bg = color_arry[self.cur_window[i][j]] ) 
        for i in range(4):
            for j in range (4):
                if self.cur_block[i][j] != 0:
                    self.label_name[(i + self.cur_ad[0]) + (j + self.cur_ad[1]) * self.rw].config(bg = color_arry[self.cur_block[i][j]] ) 


    def start_func(self):
        color_arry = ["gray" , "yellow" , "black"]
        global after_id
        for i in range(self.rw):
            for j in range(self.cm):
                self.label_name[i + j * self.rw].config(bg = color_arry[self.cur_window[i][j]] )
        ts.mk_block()
        ts.drow_block()
        ts.fall_mv()

    def fall_mv(self):
        flag = 0
        flag += ts.fall_func()
        if flag != 0 :
            for i in range(4):
                for j in range (4):
                    if self.cur_block[i][j] != 0:
                        self.cur_window[(i + self.cur_ad[0])][(j + self.cur_ad[1])] = self.cur_block[i][j] 
            ts.mk_block()
        ts.drow_block()
        after_id = root.after(1000, ts.fall_mv)

color_arry = ["gray" , "yellow" , "black"]
ts = tetris(CM , RW , game_window)

for i in range(RW):
    for j in range(CM):
        ts.label_name[i + j * RW] = tk.Label(f , bg = color_arry[game_window[i][j]] , width = 1 , height = 1) 
        ts.label_name[i + j * RW].grid(row=i, column = j)
 
def exit_func():
    root.destroy()
       
button_name = "start"
button = tk.Button(f , text = button_name , command = lambda : ts.start_func())
button.grid(row=0 , column = CM + 2 , rowspan =5)

button_name = "exit"
button = tk.Button(f , text = button_name , command = exit_func)
button.grid(row= 2, column = CM + 2 , rowspan = 5)

#root.bind("<Key - 4>" , ts.lmv)
root.bind("<Key - 6>" , ts.rmv)
#root.bind("<Key - 7>" , ts.lrmv)
#root.bind("<Key - 8>" , ts.fall_mv)
#root.bind("<Key - 9>" , ts.rrmv)

root.mainloop()
