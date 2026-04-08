number = 5
guess_num = int(input("请输入你第一次猜想的数字"))

if guess_num == number:
    print("恭喜你猜对了！")
elif int(input("不对，再猜一次：")) == number:
    print("恭喜你猜对了！")
elif int(input("不对，猜最后一次：")) == number:
    print("恭喜你猜对了！")
else:
    print("可惜兄弟，都没猜对，数字是5")