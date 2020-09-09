def is_substring(string, sub):
    return string.find(sub) != -1


def string_rotation(s1, s2):
    if len(s1) == len(s2) != 0:
        return is_substring(s1 + s1, s2)
    return False


if __name__=="__main__":
    s1 = input()
    s2 = input()
    print(string_rotation(s1,s2))