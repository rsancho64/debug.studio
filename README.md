# debug.studio

Aprendiendo a depurar.

Ilustramos con un swap o rotación de valores

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

Vemos que una funcion `int trySwapProcedure(char x, char y)` que copia argumentos **no** hace el swap.

Vemos que en C para que una funcion-C sea un proceimiento que realmente alcance los datos y haga el swap de sus valores tiene que ser programada con punteros. y programamos 
 `int SwapProcedure(char *px, char *py)`
 que alcanza sus argumentos y **si** hace el swap.

Para lograr un esquema totalmente funcional la pareja de valores ha de ser agrupada antes de ser pasada a una funcion, la cual creará un nuevo dato compuesto que podrá ser anotado.

```C
typedef struct
{
    char c1;
    char c2;
} TPAREJA;

TPAREJA SwapFunction(TPAREJA p);
```



