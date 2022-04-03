# 编译系统实验一实验报告

1190501001 李恩宇

## 程序实现的功能

### 基础功能

指导书上要求的词法分析和语法分析基本功能, 完成测试用例 1.1 至 1.4. 重点描述语法树结构和节点结构.
节点结构:

```c
typedef enum Type Type;
typedef struct {
    float value;
} FloatData;
typedef struct {
    int value;
} IntData;
typedef struct {
    char *name;
} IdData;
typedef struct {
    char *type;
} TypeData;
typedef union {
    FloatData *floatData;
    IntData *intData;
    IdData *idData;
    TypeData *typeData;
    void *uniData;
} DataPtr;
typedef struct Node {
    struct Node *parent;
    struct Node **sons;
    int sonCount;
    int lineno;
    Type type;
    DataPtr data;
} Node;
```

`Node` 是 AST 树的节点, 采用多叉树存储结构. `parent` 存储父亲节点, `sons` 存储儿子节点. `lineno` 存储树中第一个终结符的行号. `type` 是存储节点类型的枚举类型. `data` 是该节点包含的数据, 如果没有数据则为 `NULL`.

### 附加功能

- 用例 1.5: 程序可以识别八进制和十六进制, 在 flex 中使用 `{octuint}` 和 `{hexuint}` 来识别, 并用自己编写的 `otoi` 和 `htoi` 将字符串转为 `int`. 相关定义如下:
  ```flex
  octuint (0{octd}+)
  hexuint (0x{hexd}+)
  ```
- 用例 1.6: 识别多行错误, 在语法分析中添加了错误恢复转移.
- 用例 1.7: 识别使用科学计数法的浮点数, 在 flex 中使用 `{expfloat}` 识别. 相关定义如下:
  ```flex
  exphead ({d}+\.{d}*|{d}*\.{d}+)
  expfloat ({exphead}[eE][+-]?{d}+)
  float ({plainfloat}|{expfloat})
  ```
- 用例 1.8: 识别错误的科学计数法.

## 运行方法:

```bash
make build
./yylex <filename>
```
或
```bash
make run < <filename>
```

## 程序亮点:
各个部分解耦合, 在编译 flex 源文件时使用 `--header-file` 选项, 生成头文件供 bison 使用, 而不是使用指导教材中的 `#include "lex.yy.c"`.
