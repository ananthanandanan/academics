#word counter using regex
import re
string =input("Enter the string: ")
sen = re.findall("\w(?:[-\w]*\w)?", string)
print(sen)
count = len(re.findall("[a-zA-Z-]+", string))
print (count)