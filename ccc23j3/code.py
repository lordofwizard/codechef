t = int(input())


list_b = []


while t != 0:
    x = {
        1 : 0,
        2 : 0,
        3 : 0,
        4 : 0,
        5 : 0
    }
    text = input()
    i = 1
    for char in text:
        if char == 'Y':
            x[i] += 1
        i+= 1
    t -= 1

    list_b.append(x)
x = {
    1 : 0,
    2 : 0,
    3 : 0,
    4 : 0,
    5 : 0
}
for item in list_b:
    for i in range(1,6):
        if item[i] == 1:
            x[i] += 1


list_ = sorted(x.items(),key=lambda a:a[1],reverse=True)
flag = False
for i in range(0,4):
    if list_[i][1] == list_[i+1][1]:
        flag = True

if flag == False:
    print(list_[0][0])
else:
    msg = ""
    x = list_[0][1]
    for item in list_:
        if item[1] == x:
            msg+=(f"{str(item[0])},")
    print(msg[:-1])
