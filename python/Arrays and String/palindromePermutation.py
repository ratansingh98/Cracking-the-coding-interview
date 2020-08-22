from itertools import permutations 

def checkPalindrome(s):
    s = s.replace(" ","")
    permList = permutations(s) 

    temp=[]
    # print all permutations 
    for perm in list(permList): 
        s1 = ''.join(perm)
        if (s1 == s1[::-1]):
            return True
    
    return False


s1 = input()
print(checkPalindrome(s1))