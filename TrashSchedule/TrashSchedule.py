import tkinter as tk
import turtle
from tkinter import * 
from tkinter.ttk import *
from tkinter import messagebox as mb
#from PIL.ImageTk import PhotoImage

box = tk.Tk()
box.title("Setup Trash Schedule")
#box.geometry("450x150")
is_on = True

canvas = tk.Canvas(box)
canvas.config(width = 470, height = 300)
canvas.grid(row=20, column = 1)
s = turtle.TurtleScreen(canvas)
s.bgcolor("cyan")
#t = turtle.RawTurtle(canvas)

def save():
    trashSch = open("TrashSch.txt","w")
    
    trashSch.write(date.get())
    trashSch.write("\n")
    trashSch.write(sTime.get())

    date.delete(0,'end')
    sTime.delete(0,'end')
    trashSch.close()

#Define our switch function
def switch():
    global is_on
        # Determin is on or off
    if is_on:
        on_button.config(image = off)
        #my_label.config(text = "The Switch is Off", fg = "grey")
        date = 7
        sTime = 0
        is_on = False
    else:
        
        on_button.config(image = on)
        #my_label.config(text = "The Switch is On", fg = "green")
        is_on = True
# Define Our Images
on = PhotoImage(file = 'on.png')
off = PhotoImage(file = "off.png")
    
date_label = tk.Label(box, text = "When is trash day? (M,T,W,Th,F,Sun) : ").grid(row=0, column = 0)
date = tk.Entry(box)
date.grid(row=0, column = 1)
sTime_label = tk.Label(box, text = "What time should I go to the curb? (military time) : ").grid(row=2, column = 0)
sTime = tk.Spinbox(box, from_=0, to_=23, width =10)
sTime.grid(row=2,column = 1)
sub_btn=tk.Button(box,text = 'Submit',command = save)

# Create A Button
on_button = tk.Button(box, text = 'Auto',image = on, command = switch)

sub_btn.grid(row = 18, column = 1)
on_button.grid(row=14, column = 0)
    
box.mainloop()


#if __name__ == "__main__":
 #   main()