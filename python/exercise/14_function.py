
def check(temp):

    """
    check函数可以根据温度判断您是否发烧了
    """

    if temp < 37.2:
        return "SAFETY"
    else:
        return None

re = check(38)
if re:
    print("您没有发烧！")
else:
    print("您发烧了")

