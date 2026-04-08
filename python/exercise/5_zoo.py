print("Welcome to David's children zoo!!!")
weight = int(input("How many your height(cm)?"))
vip_level = int(input("What's your vip level?"))

if weight < 120:
    print("您的身高未超出120cm， 可以免费游玩。")

elif vip_level >= 3:
    print("虽然你的身高超出了120cm，但是你的VIP等级大于2，可以免费游玩。")

else:
    print("您的身高超出120cm，且您的VIP等级不够，游玩需要购票10元。")

print("Welcome!!!")