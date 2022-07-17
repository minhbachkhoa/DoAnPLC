#include "XuLy.h"

int numberlines(FILE *filePLC)
{
    char str[50];
    int count = 0;
    while (fgets(str, 50, (FILE *)filePLC))
    {
        count++;
    }
    fclose(filePLC);
    return count;
}

void checkSTL(int numline, FILE *filePLC, FILE *fileSTL)
{
    filePLC = fopen("FILEPLC.awl", "r");
    char str[50];
    char str1[8] = "Network";
    int count1 = 0;

    while (fgets(str, 50, (FILE *)filePLC))
    {
        count1++;
        if (count1 >= 6 && count1 <= numline - 12)
        {
            if (strncmp(str, str1, 7) != 0 && count1 != numline - 12)
            {
                fputs(str, fileSTL);
            }
            else
            {
                fputs("N\n", fileSTL);
            }
        }
    }
    fclose(fileSTL);
}

// hàm xóa khoảng trắng của chuỗi
char *delete_space(char *str, char *result)
{
    int pos = 0;

    const int len = strlen(str); /*Tìm độ dài chuỗi ban đầu*/
    for (int i = 0; i < len; i++)
    {
        char c = str[i];

        /*Nếu ký tự lấy ra là ký tự trắng thì bỏ qua*/
        if (c == '\r' || c == '\n' || c == ' ')
        {
            continue;
        }

        /*Thêm ký tự lấy ra vào kết quả*/
        result[pos++] = c;
    }
    return result;
}
