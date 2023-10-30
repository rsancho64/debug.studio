# debug.studio

aprendiendo a depurar
ilustramos con un swap o rotación de valores

```c
    int a = 11;
    int b = 22;
    int tmp;

    assert( a == 11 && b == 22);
    tmp = a;
    a = b;
    b = tmp;
    assert( a == 22 && b == 11);  // swaped !
```



