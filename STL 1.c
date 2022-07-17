#include "STL.h"

int main()
{
    LIST *l = (LIST *)calloc(1, sizeof(struct list));
    LIST *xl = (LIST *)calloc(1,sizeof(struct list));
    FILE *listcode = fopen("listcodebd.txt", "w");
    FILE *listxl = fopen("listxl.txt", "w");
    FILE *filePLC = fopen("FILEPLC.awl", "r");
    FILE *fileSTL = fopen("STL.txt", "w");
    int numline = numberlines(filePLC);

    if (filePLC == NULL)
    {
        printf("file mo khong thanh cong");
        return -1;
    }

    if (fileSTL == NULL)
    {
        printf("file mo khong thanh cong");
        return -1;
    }

    checkSTL(numline, filePLC, fileSTL);
    nhapdulieuchochuoi(fileSTL, l);
    tachnhanh(l,listcode,listxl);
    
    fclose(listxl);

    
    listxl = fopen("listxl.txt", "r");

    if(listxl == NULL)
    {
        printf("file mo khong thanh cong");
        return -1;
    }

    xuatchofilelistxl(xl,listxl);
    
    fclose(listxl);
    fclose(listcode);
    fclose(filePLC);
    fclose(fileSTL);
    return 0;
}
