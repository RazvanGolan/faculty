#exercitul 4b)

def cate_cifre(n):
    if n<10:
        return 1
    else:
        return 1+cate_cifre(n/10)


#exercitiul 4c)

def cif_max(n):
    if n<10:
        return n
    else:
        maxi=cif_max(n//10)
        if(maxi>n%10):
            return maxi
        else:
            return n%10

#exercitiul 4d)

def nr_cifre_pare(n):
    if n<10:
        if n%2==0:
            return 1
        else:
            return 0
    else:
        if n%10%2==0:
            return 1+nr_cifre_pare(n//10)
        else:
            return nr_cifre_pare(n//10)

#exercitiul 5

def exponent(a,n):
    if n==1:
        return a
    else:
        return a*exponent(a,n-1)

#exercitiul 9

def interval(min_value,max_value):
    if max_value==min_value:
        print(max_value)
    else:
        print(min_value)
        interval(min_value+1,max_value)

interval(9,100)

