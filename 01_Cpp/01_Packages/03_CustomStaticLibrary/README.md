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

1. Build each custom static library

```Shell
g++ -c library1/somefile.cpp -o library1.o
g++ -c library2/printer1.cpp -o library2.o
g++ -c library3/printer2.cpp -o library3-printer1.o
g++ -c library3/printer3.cpp -o library3-printer1.o
```

2. Create static library

```Shell
ar rcs libmystatic.a library1.o library2.o library3-printer2.o library3-printer3.o
```

> WARNING !!! name of *.a file must start with `lib` word and ends with. `.a` extension


3. Build program with referenced static library

```Shell
g++ program.cpp -L . -l mystatic -o app.out
```

4. Run

```Shell
./app.out
```