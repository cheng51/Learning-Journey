import random
num = random.randint(1, 10)
guess_num = int(input("第一次机会猜测："))

if guess_num != num:
    if guess_num < num:
        print("你猜小了")
    else:
        print("你猜大了")
    guess_num2 = int(input("第二次猜测："))
    if guess_num2 != num:
        if guess_num2 < num:
            print("你猜小了")
        else:
            print("你猜大了")
        guess_num3 = int(input("猜第三次："))
        if guess_num3 != num:
            print("可惜最后都猜错了,数字是%d" % num)
        else:
            print("第三次才对了")
    else:
        print("第二次猜对了")

else:
    print("恭喜你猜对了")
