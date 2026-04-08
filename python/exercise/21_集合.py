my_set = {"传智教育", "黑马程序员", "itheima", "传智教育", "黑马程序员", "itheima", "传智教育", "黑马程序员", "itheima"}
# 集合的唯一性，无序性
print(my_set)

# 添加
my_set.add("Python")
my_set.add("itheima")
print(my_set)

# 删除
my_set.remove("传智教育")
print(my_set)

# pop随机拿出元素
my_set = {"传智教育", "黑马程序员", "itheima"}
element = my_set.pop()
print(my_set)

# clear清空集合
my_set.clear()
print(f"清空：{my_set}")

# 两集合取差集
num_set1 = {1, 2, 3}
num_set2 = {4, 2, 3}

num_set3 = num_set1.difference(num_set2)
print(num_set3)
print(num_set2)
print(num_set1)

# 删除交集，保留差集

num_set1 = {1, 2, 3}
num_set2 = {4, 2, 3}
num_set1.difference_update(num_set2)
print(num_set1)

# 合并集合
num_set1 = {1, 2, 3}
num_set2 = {4, 2, 3}

num_set3 = num_set1.union(num_set2)
print(num_set3)

# 统计长度
count = len(num_set3)
print(count)

# 集合的遍历(仅可用for)
for i in num_set3:
    print(i)


