#ifndef MY_NODE_H__
#define MY_NODE_H__

enum Type {
    T_INT, T_FLOAT,
    T_SEMI, T_COMMA,
    T_ASSIGNOP,
    T_RELOP,
    T_PLUS, T_MINUS, T_STAR, T_DIV,
    T_AND, T_OR,
    T_DOT,
    T_NOT,
    T_TYPE,
    T_LP, T_RP, T_LB, T_RB, T_LC, T_RC,
    T_STRUCT, T_RETURN, T_IF, T_ELSE, T_WHILE,
    T_ID,
    T_PROGRAM, T_EXTDEFLIST, T_EXTDEF, T_EXTDECLIST,
    T_SPECIFIER, T_STRUCTSPECIFIER, T_OPTTAG, T_TAG,
    T_VARDEC, T_FUNDEC, T_VARLIST, T_PARAMDEC,
    T_COMPST, T_STMTLIST, T_STMT,
    T_DEFLIST, T_DEF, T_DECLIST, T_DEC,
    T_EXP, T_ARGS
};
extern const char* TYPE_NAME[];

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
Node* newNode(int lineno, Type type, void *data, int sonCount, Node* sons[]);
void printTree(Node *node, int depth);
#endif