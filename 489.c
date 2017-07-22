#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int m,s,rm,l,stk=0,stk_a=9,con=0,con2=0;
scanf("%d %d",&m,&s);
int * arr  = (int *)malloc(m * sizeof(int));
int * arr2 = (int *)malloc(m * sizeof(int));
//largest
		for(l=0;l<m;l++){
		//if(l=m-1)
arr[l]=stk_a;
stk += arr[l];
		  while(stk > s){
stk -= arr[l];
arr[l]--;
stk_a=arr[l];
stk += arr[l];
//test
//printf("arr : %d\n",stk);
//test

				}
con  += (int)pow(10,m-l-1)*arr[l];
//test
//printf("pow : %d\n",(int)pow(10,m-l-1)*arr[l]);
//test
				}

//test
//		for(l=0;l<m;l++)printf("%d ",arr[l]);
//test
//reverse
		for(l=0;l<m;l++)arr2[l] = arr[m-l-1];
		if(arr2[0] == 0){
arr2[0]=1;
l=1;
		while(arr2[l++] != 0){
arr2[l]--;break;
					}

				}
		for(l=0;l<m;l++)con2 += (int)pow(10,m-l-1)*arr2[l];

//reverse

		if(arr[0] == 0){printf("%d %d\n",-1,-1);return 0;}
printf("%d %d\n",con2,con);

return 0;
}



