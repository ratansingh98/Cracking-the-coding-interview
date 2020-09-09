def one_edit_replace(s1,s2):
    count =0
    for i1,i2 in zip(s1,s2):
        if(i1 !=i2):
            count +=1
        if(count>1):
            return False
    return True

def one_edit_insert(s1, s2):
    edited = False
    i, j = 0, 0
    while i < len(s1) and j < len(s2):
        if s1[i] != s2[j]:
            if edited:
                return False
            edited = True
            j += 1
        else:
            i += 1
            j += 1
    return True

def one_away(s1, s2):
    '''Check if a string can converted to another string with a single edit'''
    if len(s1) == len(s2):
        return one_edit_replace(s1, s2)
    elif len(s1) + 1 == len(s2):
        return one_edit_insert(s1, s2)
    elif len(s1) - 1 == len(s2):
        return one_edit_insert(s2, s1)
    return False


if __name__ == "__main__":
    s1 = input()
    s2 = input()
    print(one_away(s1,s2))

