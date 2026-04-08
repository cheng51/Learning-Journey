def print_file_info(file_name):
    f = None
    try:
        f = open(file_name, "r", encoding="UTF-8")
        print(f.read())
    except Exception as e:
        print(e)
    finally:
        if f:
            f.close()

def append_to_file(file_name, data):
    f2 = open(file_name, "a", encoding="UTF-8")
    f2.write(data)
    f2.write("\n")
    f2.close()

# test
if __name__ == "__main__":
    print_file_info("C:/Users/jiqingchuan/Desktop/test.txt")

    append_to_file("C:/Users/jiqingchuan/Desktop/test.txt", "I am David")


