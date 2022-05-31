import tkinter as tk
import random
import tkinter.messagebox as mb

const ={'x0' : 200 , 'y0' : 150 , 'ini_vert' : 60 , 'dev' : 100 , 'delta' : 20 , 'g' : 10}

root = tk.Tk()
root.title(u"チ◯リ走")
root.geometry(str(const['x0'])+ "x" + str(const['y0']))

bgparts = ["bgparts" + str(n) for n in range(const['dev'])]
character = 1
inform = 2

canvas = tk.Canvas(root, width = const['x0'], height = const['y0'])
canvas.place(x=0, y=0)

def start_func(x0 , y0 , ini_vert , dev , delta , g) :
    global key_flag
    inform = canvas.create_text(x0 / 2 , y0 / 4, text = 'spaceキーでスタート\nspaceキーでジャンプ\n2段ジャンプまで' , tag = "info")
    character = canvas.create_oval(x0 / 5 , y0 - (ini_vert + 6 * x0 / dev) , x0 / 5 + 3 * x0 / dev , y0 - ini_vert , fill = "orange" , tag = "chara")

    for n in range(dev):
        bgparts[n] = canvas.create_rectangle(n * x0 / dev , y0 - ini_vert , (n + 1 ) * x0 / dev , y0 , fill = "black" , tag="bg" )

    key_flag = -1
    n = 0
    t = 0
    hole_span =0
    hole_int = 1
    vert = const['ini_vert']
    return n , t

def createbg(n , vert , hole_int , hole_span , x0 , y0 , ini_vert , dev , delta , g):
    global after_id
    global key_flag
    rdm = random.randint(0 , 2)
    vert = vert + (rdm - 1) * x0 / dev
    if y0 / 15 > vert :
        vert = y0 / 15
    elif vert >  y0 / 15 * 11 : 
        vert = y0 / 15 * 11

    vert_temp = vert

    if hole_int == 0 :
        hole_span = random.randint(dev / 20 , dev / 10)
        
    if hole_span > 0 :
        vert = 0
    elif hole_span == 0 :
        hole_int = random.randint(dev / 20 , dev / 2)

    hole_span -= 1
    hole_int -= 1
    
    bgparts[n] = canvas.create_rectangle(x0 , y0 - vert , x0 + x0 / dev , y0 , fill = "black" , tag="bg" )
    vert = vert_temp

    return vert , hole_int , hole_span

def chara_pos(n , t , score , x0 , y0 , ini_vert , dev , delta , g):
    global key_flag
    pos = int(n + 1 / 5 * dev)
    pos1 = canvas.bbox(bgparts[(pos + 1) % dev])
    pos3 = canvas.bbox("chara")
    pos = pos1[1] - pos3[3]
    if  1 * x0 / dev < pos :
        t  = fall_func(pos , t , **const)
    elif  -5 * x0 / dev <= pos <= 1 * x0 / dev :
        if 1 <= key_flag :
            t  = fall_func(pos , t , **const)
        else :
            chara(pos)
            key_flag = 0
            t = 0
    else :
        gameover()
        dist ="進んだ距離:{}m" 
        res = mb.askquestion('スコア', dist.format(score * 5 / 1000 * delta) , detail = "リトライしますか？")
        if res == "yes" :
            canvas.delete("bg")
            canvas.delete("chara")
            score = 0
            n , t = start_func(**const)
            hole_span =0
            hole_int = 1
            vert = ini_vert
        else :
            t = -1

    return t , score
        
def bgmv(x0 , y0 , ini_vert , dev , delta , g) :
    canvas.move("bg" , -x0 /dev , 0)


def chara(pos):
    canvas.move("chara" , 0 ,  pos)

    

def fall_func(pos , t , x0 , y0 , ini_vert , dev , delta , g):
# v = v0 + at
# s = v0t +1/2at2
# v2 - v02 = 2as
    global key_flag
    v0 = 5
    if key_flag == 0 :
        v0 = 0
    elif key_flag == 2 :
        key_flag += 1
        t = 0
    
    v = - v0 + g * (t / delta)

    if pos < v :
        v = pos
        t = 0
        key_flag = 0
        
    canvas.move( "chara" , 0 ,  v)
    t += 1
    return t

def jump_flag(event):
    global key_flag
    if key_flag == -1 :
        canvas.delete("info")
    
    key_flag += 1

def gameover():
    global after_id
    root.after_cancel(after_id)

def main_func(n , vert , hole_int , hole_span , t , score , x0 , y0 , ini_vert , dev , delta , g) :
    global key_flag
    score += 1
    if key_flag >= 0 :
        vert , hole_int , hole_span = createbg(n , vert , hole_int , hole_span , **const)
        t , score = chara_pos(n , t , score ,  **const)
        bgmv(**const)
        n = (n + 1) % dev
    else :
        vert = ini_vert
        n = 0
        t = 0
        hole_span =0
        hole_int = 1

    if t != -1 :
        after_id = root.after(delta, lambda : main_func(n , vert , hole_int , hole_span , t , score , **const ))
    else :
        root.destroy()

n , t = start_func(**const)

score = 0
hole_span =0
hole_int = 1
vert = const['ini_vert']

after_id = root.after(100, lambda : main_func(n , vert , hole_int , hole_span , t , score , **const) )

root.bind("<Key - space>" , jump_flag)

root.mainloop()
