valus={a=10,b=11,c=12,d=13,e=14,f=15}n=io.read()r=0 for i=1,#n do c=n:sub(i,i)m=valus[c] or tonumber(c)r=r+math.pow(16,#n-i)*m end print(r)
