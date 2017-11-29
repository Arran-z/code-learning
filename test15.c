# include<string.h>
main()
{
    char a[20];
    strcpy(a,"你好");/*汉字的输出要以字符串格式输出，因为汉字的编码类型是由gb为标准编写的，一般一个汉字占据两个字节*/
    puts(a);
}
