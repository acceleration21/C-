#include <stdio.h>
int index = 0;
int main()
{
while(1){
    printf("1--添加字符\n");
    printf("2--删除最后一个字符\n");
    printf("3--显示全部字符\n");
    printf("4--查找替换敏感字符\n");
    printf("5--退出\n");

    printf("输入相应的功能编码\n");
    int code;
    scanf("%d",&code);
    
    if (code == 1) {
        printf("输入要添加的字符:\n");
        char m;
        scanf("%c",&m);
        scanf("%c",&m);
        index++;

        printf("回车继续\n");
        char x;
        scanf("%c",&x);
        scanf("%c",&x);
    }
    if (code == 2) {
        /* code */
    }
    if (code == 3) {
        /* code */
    }
    if (code == 4) {
        /* code */
    }
    if (code == 5) {
        printf("回车退出\n");
        break;
    }


}
    return 0;
}