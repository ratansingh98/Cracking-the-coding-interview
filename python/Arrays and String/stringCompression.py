s = input()
count =0
for i in range(len(s)):
    count +=1
    if(i+1>=len(s) or s[i]!=s[i+1]):
        print(s[i],count,end="",sep="")
        count =0
print()