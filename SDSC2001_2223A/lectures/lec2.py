# -*- coding: utf-8 -*-
"""
Sep. 9th

@author: xinyueli


"""

#%%help with documentation
#F9 to run the current line
help(len)
?len
range?

##hint: function; object
x=[1,2,3]
x.append?
x?

##new functions
def square(x):
    """Return the square of x."""
    return x ** 2

square?
square??

len??
?len
len?

#%%use of tab
# Spyder is even more helpful! <tab>
x.
x.c
x.co
x.cou
x.count?
x._

# import
from nu
from numpy import com
compress?
from numpy import compress
compress?
import numpy as np

#middle and end
*Warning?
*en?
str.*find?
list.co*?

#%%shortcuts
#ctrl+ < >
#ctrl+a, e
#ctrl+d, h
#ctrl+k, u, y (note: ctrl+c, x, v)
#ctrl+y
#esc: clear the line

#new console
#ctrl+t
#restart/exit
#ctrl+d
#clear the screen
#ctrl-l ; %clear (can still view it in history)

#history
#Ipython console, History



#%%line and cell magic
%lsmagic
import os
os.chdir(r"C:\Users\sdsc\OneDrive - City University of Hong Kong\Teaching\Python for Data Science\demo")
#ctrl+d
dir()
%run lec2_demo.py
dir()

%timeit?
%timeit square_func=[n*n for n in range(100)]
t = %timeit -o square_func=[n*n for n in range(100)]

#copy and paste
%%timeit
square_func=[n*n for n in range(100)]


#equivalence
%timeit L = [n ** 2 for n in range(100)]

#copy and paste
%%timeit
    L = []
    for n in range(100):
        L.append(n ** 2)

%lsmagic
%magic

#%%In and out; history
#history
#up and down arrows
#Esc

#ctrl+d
import math
math.pi
math.sin(2)
math.cos(2)

In
Out

#save the output; see whether there is any output
%timeit square_func=[n*n for n in range(100)]

%timeit -o square_func=[n*n for n in range(100)]

a = %timeit -o square_func=[n*n for n in range(100)]

In[1]
Out[2]
type(In)
type(Out)
x = Out[3]; y=Out[4]; x ** 2 + y ** 2

print(_);print(__);print(___)
Out[2]
_2

#result suppression; no output
Out[2];
Out[3]
Out[2];Out[3]
math.sin(1) + math.cos(1);
#print does not generate an output
Out
print(_);print(__);print(___)
1 in Out #There is no Out[1], then False; it there is Out[1]: True 

%history
history 1-3
%rerun?
%save?
rerun 1-3
save hist.py 1-5 6 9

#%% shell commands
!echo "shell commands"
echo "magic"
ls
pwd
mkdir dir_demo
cd dir_demo

##pass values: some magic might not work
mypath = %pwd
type(mypath)
file_list = %ls
from os import listdir
file_list = listdir()

## list only files but not directories
## isfile: whether it is a file
## join: join paths + filenames; see join?
from os.path import isfile, join
onlyfiles = [f for f in file_list if isfile(join(mypath, f))]

message = "hello world"
echo message
echo {message}

#temporary shell
pwd
cd ..
pwd
%cd ..
pwd
#automagic is on
cd 

#%% Errors and debugging
def func1(a,b):
    return a/b
def func2(c):
    a = c
    b = c-1
    return func1(a,b)

func2(1)
xmode
xmode?
xmode context
xmode verbose
func2(1) 

#ipdb: ipython debug
%debug
print(a)
print(b)
print(func1(a,b))
quit

func2(1)
debug
up
print(c)
down
quit

#auto debug
xmode Plain
%pdb on
func2(1)

#debug an entire file
%run -d
#ctrl + F5
next

#debugging: more on ipdb's online documentation
list
help
quit
continue
next
#<enter>
print
