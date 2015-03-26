# C++ Primer

## 目录

- [变量和基本类型](#变量和基本类型)
- [作者](#作者)
- [版权](#版权)

## 变量和基本类型

### 基本内置类型

- 当明知数值不可能为负数的时候使用无符号类型（`unsigned`）。
- 尽量使用 `int` 执行整数操作，若超过 `int` 的表示范围，则使用 `long long` 类型。
- 尽可能使用 `double` 而不是 `float` 类型。
- 当一个表达式既有带符号类型也有无符号类型时，若带符号类型取值为负，则带符号类型会被转化为无符号类型。

例子：

    int a = -1; // a = 4294967295 if 32-bit
    unsigned b = 1;

### 变量

- 初始化时在创建变量时赋予其初始值；赋值时用一个新值取代其当前值。
- 建议初始化每一个内置类型的变量。
- 变量只能定义（define）一次，而可以多次声明（declare）。

要声明一个变量而不定义的话需要使用 `extern` 关键字，但不要显式初始化变量：

    extern int i; // DO NOT ASSIGN.

- 尽量在变量第一次使用的地方定义它，这样有助于找到它的定义和赋合适的初始值。

### 复合类型

- 指针（pointer）是对象，而引用（reference）不是。
- 因此允许对指针进行赋值和拷贝，且指针可以先后指向不同对象。
- 指针无须在定义时赋初始值。
- 建议初始化所有指针。

指向指针的引用：

    int *p;
    int *&r = p; // r 是对指针 p 的引用

### 处理类型

`decltype((var))` 的结果永远是引用，而 `decltype(var)` 只有当 var 本身是引用时才是引用。

    int i;
    decltype(i) e; // e 是未初始化的 int
    decltype((i)) d; // d 是 int& 必须进行初始化

### 自定义数据结构

- 头文件改变后相关的源文件必须重新编译获得更新后的声明。
- 一般来说应该习惯性加上头文件保护符。

## 作者

[**Jing Guo**](http://guoj.org/)

## 版权

MIT. Copyright (c) [Jing Guo](http://guoj.org/)