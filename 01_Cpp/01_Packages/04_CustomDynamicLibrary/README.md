# Right way

> USE MAKEFILE and build packages one after another

## Steps

1. Build 

```Shell
make
```

2. Run

```Shell
./app.out
```

3. Clean

```Shell
make clean
```

# Manual way

## Steps

1. Build each custom dynamic library

```Shell
g++ -fpic -c library1/somefile.cpp -o library1.o
g++ -fpic -c library2/printer1.cpp -o library2.o
g++ -fpic -c library3/printer2.cpp -o library3-printer2.o
g++ -fpic -c library3/printer3.cpp -o library3-printer3.o
```

2. Create dynamic library

```Shell
g++ -shared -o libmydynamic.so library1.o library2.o library3-printer2.o library3-printer3.o
```

> WARNING !!! name of *.so file must start with `lib` word and ends with. `.so` extension


3. Build program with referenced dynamic library

```Shell
g++ program.cpp -L . -l mydynamic -o app.out
```

4. Set Environment variable for all shared libraries

```Shell
export LD_LIBRARY_PATH=../05_CustomDynamicLibrary
```

5. Run

```Shell
./app.out
```