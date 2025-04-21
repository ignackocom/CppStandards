# CppStandards
Cpp standard constants

Example of use

```
#if defined(__cplusplus) && __cplusplus == CPP11
...
Cpp 11 code
...
#endif
```

another example

```
#if CPLUSPLUS_VERSION == CPPPRE98
...
CPPPRE98 code
...
#elif CPLUSPLUS_VERSION == CPP98
...
CPP98 code
...
#elif CPLUSPLUS_VERSION == CPP11
...
CPP11 code
...
#else
...
other code
...
#endif
```

another example

```
printf("cpp version      = %ld\n", GET_CPLUSPLUS_VERSION());
printf("cpp version year = %ld\n", GET_CPLUSPLUS_VERSION_YEAR());
```


# History of changes ...
