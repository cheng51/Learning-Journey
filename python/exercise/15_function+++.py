money = 5000000
name = input("Name?")



def check_balance():
    print("----------------查询余额------------------")
    print(f"尊贵的{name}，您的余额为：{money}元.")

def take_out():
    global money
    print("-------------------取款----------------------")
    take_out_number = int(input(f"{name}您好！您要取出多少元？"))
    if take_out_number <= money:
        money -= take_out_number
        print(f"{name}您好！您取款{take_out_number}元成功！您的账户余额是：{money}")
    else:
        print("您的余额不足！")
        print(f"{name}您好！您取款{take_out_number}元失败！您的账户余额是：{money}")

def deposit():
    global money
    print("-------------------存款----------------------")
    deposit_number = int(input(f"{name}您好！您要存入多少元？"))
    money += deposit_number
    print(f"{name}您好！您存款{deposit_number}元成功！您的账户余额是：{money}")

def main():
    print("------------------主菜单--------------------")
    print(f"{name}，您好！！！欢迎来到David银行ATM，请选择操作：")
    print("查询余额\t[输入1]")
    print("取款\t\t[输入2]")
    print("存款\t\t[输入3]")
    print("退出\t\t[输入4]")
    return int(input("请输入您的选择："))

while True:
    key_board = main()
    if key_board == 1:
        check_balance()
    elif key_board == 2:
        take_out()
    elif key_board == 3:
        deposit()
    else:
        print("程序退出了.")
        break

    
        