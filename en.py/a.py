def swap(x, y):
    tmp = x
    x = y
    y = tmp

def swapProcedure(par):
    tmp = par[0]
    par[0] = par[1]
    par[1] = tmp
    return par

a = 11
b = 22

# tmp = a
# a = b
# b = tmp

# swap(a, b) # no funciona

par = []
par.append(a)
par.append(b)

print(f"a y b valen {par[0]} y {par[1]}")

par = swapProcedure(par)
print(f"a y b valen {par[0]} y {par[1]}")
