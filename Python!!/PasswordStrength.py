#Begineer password strength checker!!

password = input("Enter a new Password:")
result = 0
if len(password) >= 8:
    result = result +1


Num = 0
for i in password:
    if i.isdigit():
        num =1

if num == 1:
    result = result + 1

upper = 0
for i in password:
    if i.isupper():
        upper = 1

if upper == 1:
    result = result + 1

if result >= 3:
    print("Strong Password")
else:
    print("Weak password:")





