# function
def func(n):
    ni=1
    x,y = 0,0
    for i in range(1,n):
        if((i*(i+1))/2 == n):
            ni = i
            break
    for i in range(1,ni-1):
        x = (i*(i+1))/2
        y = ((i+1)*(i+2))/2

        if(x*x + y*y == n):
            print n
            print x , y,
            return 1
    return 0

for i in range(1,50):
        a = (i*(i+1))/2
        res = func(a)

        if (res == 1):
            print "True"
        
print "\n"
        
##while(1):
##    
##    n = int(input("Enter a number: "))
##
##    res = func(n)
##
##    if (res == 1):
##        print "True"
##    else:
##        print "False"
