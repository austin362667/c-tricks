# c-tricks

## Preventing common pitfalls

### Concepts
- ```-Wall``` all the way. 
  -Wall means warning all

- Use compliers with lint.
  static code analysis tool

- Write C code over Linux/POSIX env.
  And use external libraries, e.g., glib2, sqlite, gsl

- [_21st Century C_ by Ben Klemens](https://github.com/b-k/21st-Century-Examples)

- Use valgrind to check memory leaks.

### Common Pits
- ```=``` and ```==``` typo.
  - ```if (a=5) ...```, run time error.
  - ```if (5=a) ...```, error can be found during comple time.

- ```switch case``` forget to add ```break```.

- dangling-else problem.
  - Get used to add ```{}``` after else.

- the ```%c``` of ```scanf()``` is end with empty characater.
  - ```scanf("%[^,]", s);``` scanning ends when meet ```,```.

- The difference between ```i++``` and ```++i```.
  - ```i++```, get value first, then add up.
  - ```++i```, add up first, then get value.

- Quotes with brackets while using macro's variable.
  - ```#define SQUARE(x) (x*x)```, failed when ```SQUARE(10-5)```.
  - ```#define MAX(x,y) ((x)>(y)?x:y)```, failed when ```MAX(a==1, 5)```.

- Stack overflow
  - e.g., ```void f() { char a[10000000]; ... }```

- Careful with float point numbers
  - DO NOT USE ```float a=0.1, b=0.2; if (a+b==0.3) ... ```.
  - USE ```float a=0.1, b=0.2; if (abs(a+b - 0.3) < 0.00000000000001) ...```
  - Banker's Rounding. Significant Figures.

- Buffer overflow
  - Choose ```strncpy()``` over ```strcpy()```.
  - Choose ```snprintf()``` over ```sprintf()```.

- With different ARCH compliers, the length of ```int``` can be 2/4/8 bytes.

### Pointer Pits

- Pointers misuse, or point out of range.
  - ```int *p; p=100; *p = 3; // Error```
  - ```int a[10]; *p=a; p+=10; *p = 3; // Error``

- ```malloc``` and ```free```
  - Use ```assert```.

- The stack pointer already returned. But require return the gone value.
  - ```char *f() { char a[10]="hello"; return a; }```

- Mis-setting pointer to content itself.
  - ```*ip=&i; ip = 7; *ip=5;```

- Consider type(or struct) into pointer computation.
  - ```long a[10], p=a; p+=3;```,  p will move forward 12 bytes.

- Forget initialization.
  - ```char *r, *s="hello!"; strcpy(r, s);```
  - ```char *p; *p = 5;```
  - ```char *p; scanf("%s", p);```







