# name_list = ['张三', '李四', '王五']

# index = 0
# while index < len(name_list):
#     name = name_list[index]
#     print(name)
#     index += 1

# for name in name_list:
#     print(name)

num_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
new_list1 = []
new_list2 = list()

index = 0
while index < len(num_list):
    num = num_list[index]
    if num % 2 == 0:
        new_list1.append(num)
    index += 1

for num in num_list:
    if num % 2 == 0:
        new_list2.append(num)

print(new_list1)
print(new_list2)

