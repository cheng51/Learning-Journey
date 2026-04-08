import random
num = random.randint(1, 100)

i = 0

while True:
    guess = int(input(f"第{i+1}次猜数："))
    if guess == num:
        print(f"恭喜你第{i+1}次机会猜中了！！！")
        break
    else:
        print("你猜大了" if guess > num else "你猜小了")
        i += 1
        continue