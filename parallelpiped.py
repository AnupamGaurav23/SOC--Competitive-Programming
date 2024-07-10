from math import sqrt
a,b,c= map(int, input().split())
print(4*((int(sqrt(a*b*c)))//a+ (int(sqrt(a*b*c)))//b+ (int(sqrt(a*b*c)))//c))
