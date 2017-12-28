
> There is THE PACKAGE. 

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


# VSCode way

> We also can build,debug or run app via VSCode task.


## Run

Run
```Shell
F5
```

Must be set the right lauch task
![alt tag](https://raw.githubusercontent.com/lukaskellerstein/CppArduinoSamples/master/images/Selection_027.png)


## Build

> You don't need build a program. VSCode builds program for you. But you have a choice.


Build, select task
```Shell
Ctrl + Shift + B
```
Select Task
`build 01_Packages/02_Basics` 


# Possible way

> We also can build app like before in NO PACKAGE example.

## Steps

1. Build 

```Shell
g++ main.cpp mypackage1/somefile.cpp -o app.out
```

2. Run

```Shell
./app.out
```

