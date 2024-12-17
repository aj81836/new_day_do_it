# # # # # # seq=range(10)

# # # # # # for i in seq:
# # # # # #     print(i)

# # # # # for i in range(2,10):
# # # # #     print(i)

# # # # n=7

# # # # sum=0
# # # # for i in range(0,n+1):
# # # #     sum+=i

# # # # print("total sum=",sum)

# # # n=7
# # # sum=0
# # # i=1
# # # while i<=n:
# # #     sum+=i
# # #     i+=1

# # # print("sum=",sum)

# # n=5
# # fact=1
# # for i in range(1,n+1):
# #     fact *=i

# # print("factorial is: ",fact)

# def cal_sum(a,b):
#     return a+b

# sum=cal_sum(2,7)
# print(sum)

def cal_sum(n):
    if(n==0):
        return 0
    return cal_sum(n-1)+n

sum=cal_sum(10)
print(sum)