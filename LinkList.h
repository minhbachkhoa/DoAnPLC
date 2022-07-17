#ifndef LINKLIST_H
#define LINKLIST_H

#include "STL.h"

/*
Các bước thực hiện bước 2:
Bước 1: đầu tiên tạo một chuỗi char để chứa data cho node trong danh sách liên kết
Bước 2: tạo node ,đưa data vào trong trong node
Bước 3:
*/

struct node
{
    char arr[10];
    struct node *pNext;
    struct node *pPre;
};
typedef struct node NODE;
struct list
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct list LIST;


void Init(LIST *l);
NODE *GetNode(char *arr);
void AddTail(LIST *l, NODE *p);
void xulilenhloai_A(char *arr, LIST *l);
void xulilenhloai_B(char *arr, LIST *l);
void xulilenhloai_C(char *arr, LIST *l);
int Sodaungoacphai(LIST *l);
int Sodaungoactrai(LIST *l);
void themnodevaodau(LIST *l, NODE *p);
void themvaosau(LIST *l, NODE *x, NODE *p);
void themvaotruoc(LIST *l, NODE *x, NODE *p);
NODE *travevitrinode(LIST *l, int b, int poslist);
void Themngoactrai(LIST *l, NODE *p, NODE *g, int count);
void XuatdulieuSTL(FILE *fileSTL, LIST *l);
void Biendoidau(LIST *l);
void nhapdulieuchochuoi(FILE *fileSTL, LIST *l);
void Output(FILE *listcode, LIST *l);
void tachnhanh(LIST *l, FILE *listcode, FILE *listxl);
void xuatchofilelistxl(LIST *xl, FILE *listxl);

#endif