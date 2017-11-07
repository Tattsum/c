--2
s2gp(n) = if n < 0 then -1
            else if n < 60 then 0
            else if n < 80 then 1
            else if n <= 100 then 2
            else -1

--3
max2(x, y) = if x>y then x else y
max3(x, y, z) = if x>y then if x>z then x else z
                       else if y>z then y else z
max4a(w,x,y,z)= max2(max2(x,y), max2(w,z))
max4b(w,x,y,z)= max2(x, max2(y, max2(w,z)))
max4c(w,x,y,z)= max3(x, y, max2(w,z))
max4d(w,x,y,z)= max2(w, max3(x, y, z))

--4
comb2(n,0) = 1
comb2(n,k) = if n == k then 1
              else comb2(n-1,k)+comb2(n-1,k-1)

--5
fact(0)=1
fact(n)=n*fact(n-1)

--6
add(x,y)=x+y
cube(x)=x*x*x
addcube(x,y)=add(cube(x),cube(y))

--7
plusx([], x) = []
plusx(n:ns, x) = n+x:plusx(ns,x)

--8
{-
max3(x, y, z) = if x>y then if x>z then x else z
                  else if y>z then y else z
-}

--9
mult3(n)=if n `mod`3==0 then True else False

--10
mult5(n)=if n `mod`5==0 then True else False

--11
mult35a(n)=if mult3(n)==True && mult5(n)==True then True else False

--12
mult35b(n)=if mult3(n)==True || mult5(n)==True then True else False

--13
del35a([])=[]
del35a(a:as)=if mult35a(a)==True then del35a(as) else a:del35a(as)

--14
del35b([])=[]
del35b(a:as)=if mult35b(a)==True then del35b(as) else a:del35b(as)

--15
keep35a([])=[]
keep35a(a:as)=if mult35b(a)==True then a:keep35a(as) else keep35a(as)

--16
keep35b([])=[]
keep35b(a:as)=if mult35a(a)==True then a:keep35b(as) else keep35b(as)

--17
count([])=0
count(a:as)=1+count(as)

--18
count35a(as)=count(keep35a(as))

--19
count35b(as)=count(keep35b(as))

--20
mydrop(0,as)=as
mydrop(n,a:as)=mydrop(n-1,as)

--21
mytake(0,as)=[]
mytake(n,a:as)=a:mytake(n-1,as)
