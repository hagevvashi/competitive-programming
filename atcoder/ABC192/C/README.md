# ABC192-C

```
~/w/c/a/A/C ❯❯❯ gcc -std=c11 -o ./dist/main.out ./src/main.c && ./dist/main.out                                                                       ✘ 145
314 2
n: 314
n%10: 4
n/10: 31
n: 31

n: 31
n%10: 1
n/10: 3
n: 3

n: 3
n%10: 3
n/10: 0
n: 0

n: 297
n%10: 7
n/10: 29
n: 29

n: 29
n%10: 9
n/10: 2
n: 2

n: 2
n%10: 2
n/10: 0
n: 0

```

## 1回目

$314mod10=4$

$e.g. 31×10+4$

```c
c[4]+=1;
```

$\lfloor \frac{314} {10} \rfloor=31$

## 2回目

$31mod10=1$

$e.g. 3×10+1$

```c
c[1]+=1
```

$\lfloor \frac{31} {10} \rfloor=3$

## 3回目

$3mod10=3$

$f.g. 0×10+3$

```c
c[3]+=1
```

$\lfloor \frac{3} {10} \rfloor=0$
