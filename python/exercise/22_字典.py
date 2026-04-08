# 字典的定义
my_dict = {"张三":90, "李四":91, "王五":96}
# 定义空字典
dict1 = {}
dict2 = dict()

print(my_dict)
print(dict1)
print(dict2)

# 通过key取得value
print(my_dict["张三"])

# 定义嵌套字典
student_scores = {
    "张三": {
        "语文": 77,
        "数学": 66,
        "英语": 33
    }, "李四": {
        "语文": 88,
        "数学": 86,
        "英语": 85
    }, "王五": {
        "语文": 99,
        "数学": 96,
        "英语": 66
    }
}

print(student_scores)

# 获取字典的key
keys = my_dict.keys()
print(keys)

# 遍历字典
for key in keys:
    print(key)
    print(my_dict[key])

