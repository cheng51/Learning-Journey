# 通过open()函数打开文件，并用f作为对象接收
f = open("D:/test.txt", "r", encoding = "UTF-8")

# 读取文件10个
# print(f.read(10))
# 读取全部内容
# print(f.read())
# 读取文档的全部行，并分别放入列表中

# line_list = f.readlines()
# print(type(line_list))
# print(line_list)

# 循环读取每一行

for line in f:
    print(line)

f.close()