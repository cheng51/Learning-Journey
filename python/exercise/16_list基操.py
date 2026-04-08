# name_list = ['张三', '李四', '王五']
# # print(name_list)
# position = name_list.index('张三')
# print(position)
# name_list = [['张三', '李四'], '王五']
# # print(name_list)
# # print(name_list[0][0])
# # print(name_list[-1])
# position = name_list[0].index('李四')
# print(position)

# 插入,追加
name_list = ['张三', '李四', '王五']
name_list.insert(1, 'David')
print(name_list)
name_list.append('Lily')
print(name_list)

# 拼接
num_list1 = [1, 2, 3]
print(num_list1)
num_list2 = [5, 6, 7]
num_list1.extend(num_list2)
print(num_list1)

# 删除
num_list3 = [100, 200, 300]
del num_list3[1]
print(num_list3)
num_list3 = [100, 200, 300, 400]
num_list3.pop(-1)
# 用变量接收pop取出的元素
take_num = num_list3.pop(2)
print(num_list3)
print(take_num)

# remove移除第一个匹配的元素
name_list = ['张三', '李四', '王五']
name_list.remove('李四')
print(name_list)

# clear清空列表
name_list = ['张三', '李四', '王五']
name_list.clear
print(name_list)

# count方法计算元素数量
num_list4 = [100, 100, 200, 300, 100, 400]
count = num_list4.count(100)
print(count)

# len函数
print(num_list4)
print(len(num_list4))
