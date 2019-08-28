# learn_data_structure

## catch 使用方式
### 1. 编译test的main函数部分 
命令：
```
g++ -c test_common.cpp -std=c++11
```
其中-c命令表示编译生成目标文件(.o后缀)，-std=c++11代表使用C++11进行编译，这是catch.hpp要求的。

### 2. 编译单元测试代码
命令：
```
mkdir bin #如果没有bin目录，则创建
g++ -c .\list\list_test.cpp -std=c++11 -I. -o .\bin\list_test.o
```
-I. 代表将当前主目录加入到查找头文件的目录集合，使得catch.hpp头文件可以被找到。
输出到bin目录，避免太多二进制文件在home目录下。

### 3. 编译库文件代码
命令：
```
g++ -c .\list\list.cpp -std=c++11 -I. -o .\bin\list.o
```

### 4. 链接
将各个目标文件链接为一个可执行文件，其中main函数定义在test_common.o文件里。
命令：
```
g++ .\bin\list.o .\bin\list_test.o .\test_common.o -o bin/list_test
```
### 5. 执行单元测试

```
bin\list_test.ext -s
```