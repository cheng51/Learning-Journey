age_list1 = [21, 25, 21, 23, 22, 20]
age_list2 = [29, 33, 30]

age_list1.append(31)
print(age_list1)
age_list1.extend(age_list2)
print(age_list1)
print(age_list1[0])
last_ele = age_list1.pop(-1)
print(last_ele)
index = age_list1.index(31)
print(index)





