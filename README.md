***<h1 align="left">_Printf</h1>***

```ShellSession
int _printf(const char *format, ...)
```

The _printf function was made to easily print
different strings, characters, integers, etc...

You can simply put the function, determine the
comment you would like to print and it'll work! 

Take a look:

```ShellSession
_printf("Hello world! I'm being printed :D");
```

**<h2 align="left">"%" Usage</h2>**

You can also add the following options inside the 
comment you'd like to print:

```ShellSession
_printf("%c", char); /*Print a char*/
```

```ShellSession
_printf("%s", char *); /*Print a string*/
```

```ShellSession
_printf("%i", int); /*Print an integer*/
```

```ShellSession
_printf("%d", int); /*Print a decimal*/
```

```ShellSession
_printf("%%"); /*Print a simply percent sign*/
```

**<h2 align="left">File managment</h2>**

Inside the directory you can find the main header 
(main.h) where all the prototypes and the structure 
were saved.

Also, there is the 0-printf.c file, the prime file
where the structure, the prototypes, and the
functions are being used/called in order to make 
the _printf fuction start to accomplish the task.

The 1-printf_ids.c file is the one that makes the 
"%" options work depending on the following 
character that defines the type of the variable.

For more info, please check out the manual.
