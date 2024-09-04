#include <stdio.h>
int UCLN(int a,int b){
    if (a%b!=0)
        return UCLN(b,a%b);
    else
        return b;
}

int BCNN(int a,int b){
    return (a*b)/UCLN(a,b);
}

int main(){
    int a,b,ucln,bcnn;
    printf("Nhap (a,b): ");
    scanf("%d%d",&a,&b);
    ucln = UCLN(a,b);
    printf("UCLN(%d,%d)=%d\n",a,b,ucln);
    bcnn = BCNN(a,b);
    printf("BCNN(%d,%d)=%d\n",a,b,bcnn);
    return 0;
}