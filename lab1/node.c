#include "node.h"
#include <stdlib.h>
#include <stdio.h>

const char* TYPE_NAME[] = {
    [T_INT]="INT", [T_FLOAT]="FLOAT",
    [T_SEMI]="SEMI", [T_COMMA]="COMMA",
    [T_ASSIGNOP]="ASSIGNOP",
    [T_RELOP]="RELOP",
    [T_PLUS]="PLUS", [T_MINUS]="MINUS", [T_STAR]="STAR", [T_DIV]="DIV",
    [T_AND]="AND", [T_OR]="OR",
    [T_DOT]="DOT",
    [T_NOT]="NOT",
    [T_TYPE]="TYPE",
    [T_LP]="LP", [T_RP]="RP", [T_LB]="LB", [T_RB]="RB", [T_LC]="LC", [T_RC]="RC",
    [T_STRUCT]="STRUCT", [T_RETURN]="RETURN", [T_IF]="IF", [T_ELSE]="ELSE", [T_WHILE]="WHILE",
    [T_ID]="ID",
    [T_PROGRAM]="Program", [T_EXTDEFLIST]="ExtDefList", [T_EXTDEF]="ExtDef", [T_EXTDECLIST]="ExtDecList",
    [T_SPECIFIER]="Specifier", [T_STRUCTSPECIFIER]="StructSpecifier", [T_OPTTAG]="OptTag", [T_TAG]="Tag",
    [T_VARDEC]="VarDec", [T_FUNDEC]="FunDec", [T_VARLIST]="VarList", [T_PARAMDEC]="ParamDec",
    [T_COMPST]="CompSt", [T_STMTLIST]="StmtList", [T_STMT]="Stmt",
    [T_DEFLIST]="DefList", [T_DEF]="Def", [T_DECLIST]="DecList", [T_DEC]="Dec",
    [T_EXP]="Exp", [T_ARGS]="Args",
};

Node* newNode(int lineno, Type type, void *data, int sonCount, Node* sons[]) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->sons = calloc(sonCount, sizeof(Node *));
    for (int i = 0; i < sonCount; ++i) {
        node->sons[i] = sons[i];
        if (sons[i])
            node->sons[i]->parent = node;
    }
    node->type = type;
    node->sonCount = sonCount;
    node->data.uniData = data;
    node->lineno = lineno;
    for (int i = 0; i < sonCount; ++i) {
        if (sons[i]) {
            node->lineno = sons[i]->lineno;
            break;
        }
    }
    printf("New node created: %d\n", type);
    return node;
}

void printTree(Node *node, int depth) {
    if (node == NULL) {
        return;
    }
    if (node->sonCount == 0 && node->type >= T_PROGRAM) {
        return;
    }

    for (int i = 0; i < depth; ++i) {
        putchar(' ');
        putchar(' ');
    }

    if (node->type >= T_PROGRAM) {
        printf("%s (%d)\n", TYPE_NAME[node->type], node->lineno);
    } else if (node->type == T_TYPE) {
        printf("%s: %s\n", TYPE_NAME[node->type], node->data.typeData->type);
    } else if (node->type == T_ID) {
        printf("%s: %s\n", TYPE_NAME[node->type], node->data.idData->name);
    } else if (node->type == T_FLOAT) {
        printf("%s: %g\n", TYPE_NAME[node->type], node->data.floatData->value);
    } else if (node->type == T_INT) {
        printf("%s: %d\n", TYPE_NAME[node->type], node->data.intData->value);
    } else {
        printf("%s\n", TYPE_NAME[node->type]);
    }
    
    for (int i = 0; i < node->sonCount; ++i) {
        printTree(node->sons[i], depth + 1);
    }
}