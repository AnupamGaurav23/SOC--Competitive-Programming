f1,f2,f3= map(int, input().split())
s1,s2,s3= map(int, input().split())
t1,t2,t3= map(int, input().split())
sum1,sum2,sum3= f2+f3, s1+s3, t1+t2
f1,s2,t3= max(sum1,sum2,sum3)+1-sum1,max(sum1,sum2,sum3)+1-sum2,max(sum1,sum2,sum3)+1-sum3
pq=f1+s2+t3
c= (s1+s2+s3-f1-s2-t3)//2
f1,s2,t3= f1+c,s2+c,t3+c
print(f1,f2,f3)
print(s1,s2,s3)
print(t1,t2,t3)
