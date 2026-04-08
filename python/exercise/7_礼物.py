age = 11
year = 12
level = 11

if age >= 18:
    print("年龄符合，继续判断")
    if year > 2:
        print("恭喜你，入职时间大于两年，得到公司礼物！！！")
    elif level > 3:
        print("虽然入职时间不符合，但是级别大于3，恭喜你拿到了礼物！！！")
    else:
        print("虽然年龄符合，但是入职时间和级别无一符合，你不能拿到礼物。")
else:
    print("你年龄太小，无法得到礼物。")