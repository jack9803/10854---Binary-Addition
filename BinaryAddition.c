#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char S1[10050];
char S2[10050];
char ans[10050];
int main(){
int t,i,n,j;
char tmp;
int carry=0;
int sum;
scanf("%d",&t);

for(i=0;i<t;i++){
    scanf("%d",&n);
    tmp=getchar();
    for(j=0;j<n;j++){
        tmp=getchar();
        S1[j]=tmp;
    }
    tmp=getchar();
    for(j=0;j<n;j++){
        tmp=getchar();
        S2[j]=tmp;
    }
    carry=0;
    for(j=n-1;j>=0;j--){
            sum=carry+(int)S1[j]+(int)S2[j]-(((int)'0')*2);
            //printf("yayayay %d\n",sum);
            if(sum>=2){
                sum=sum-2;
                carry=1;
                ans[j]=(char)(sum+((int)'0'));
            }else{
                ans[j]=(char)(sum+((int)'0'));
                carry=0;
            }
    }
    ans[n]='\0';
    printf("%s\n",ans);
}
return 0;
}
