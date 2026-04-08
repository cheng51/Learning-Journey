f = open("C:/Users/jiqingchuan/Desktop/test.txt", "r", encoding="UTF-8")

count = 0
for line in f:
    line = line.strip()
    words = line.split(" ")
    for i in words:
        if i == "itheima":
            count += 1

print(count)

f.close()
