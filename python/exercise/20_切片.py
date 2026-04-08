"""
# 对列表切片
my_list = [0, 1, 2, 3, 4, 5, 6]
new_list = my_list[1:4]
print(new_list)

# 对元组切片
my_tuple = (0, 1, 2, 3, 4, 5, 6)
new_tuple = my_tuple[:]
print(new_tuple)
print(type(new_tuple))

# 对字符串切片
my_str = "0123456"
new_str = my_str[::2]
print(new_str)
print(type(new_str))

# 对列表进行步长为负数的切片
my_list = [0, 1, 2, 3, 4, 5, 6]
last_list = my_list[4:1:-1]
print(last_list)

"""

ori_str = "万过薪月，员序程马黑来,nohtyp学"
my_str = ori_str[9:4:-1]
print(my_str)
