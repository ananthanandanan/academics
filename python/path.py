import os

fileDir = os.path.dirname(os.path.abspath(__file__))
real_path = fileDir + '/path.py'
print(real_path) 

p = os.path.abspath('..')
print(p)