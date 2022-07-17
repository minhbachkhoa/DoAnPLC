#ifndef XULY_H
#define XULY_H

#include "STL.h"



int numberlines(FILE *filePLC);                              // đếm số dòng file PLC
void checkSTL(int numline, FILE *filePLC, FILE *fileSTL);    // xuất file STL
char *delete_space(char *str, char *result);                 // xóa khoảng trắng của chuỗi



#endif