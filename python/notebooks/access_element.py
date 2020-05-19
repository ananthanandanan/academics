# importing pandas package
import pandas as pd
import csv
 
# making data frame from csv file also indexed column will be left most and search related
data = pd.read_csv("data.csv")

"""ser = pd.Series(data['Id'])

for i in ser:
    print(int(i))
tweet = 1231223434
name = ['',tweet]


    
with open('nawab.csv', 'a') as f:
    append=csv.writer(f)
    append.writerow(name)
print("success")""" 


## use thi s

search_list = []
for index, row in data.iterrows():
    search_list.append(row["Proto_list"])
print(search_list)

