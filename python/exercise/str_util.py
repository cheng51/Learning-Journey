def str_reverse(s):
    new_s = s[::-1]
    return new_s

def substr(s, x, y):
    new_s = s[x:y]
    return new_s

# test
if __name__ == "__main__":
    my_str = "David"
    print(str_reverse(my_str))

    print(substr(my_str, 1, -1))

