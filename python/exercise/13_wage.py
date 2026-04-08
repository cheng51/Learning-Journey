import random

account = 10000

i = 1
for i in range(1, 21):
    if account > 0:
        performance_appraisal = random.randint(1, 10)
        if performance_appraisal <5:
            print(f"员工{i},绩效分{performance_appraisal},不发工资，换下一位.")
        else:
            account -= 1000
            print(f"向员工{i}发放工资1000元，账户余额还剩余{account}.")
    else:
        print("工资发完了，下个月领取吧！")
        break
print(f"账户余额：{account}")