/*#include <stdio.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) {
//	return 0;
//}

/*int main()
{
	double i;
	for(i=0;i!=10;i+=0.1)
	printf("%.1f\n",i);
	return 0;
 } */
 
 /*int main()
 {
//freopen("test.txt","r",stdin);
//freopen("out.txt","w",stdout);
FILE *FIN,*FOUT;
FIN=/*fopen("test.txt","rb");*/

//FOUT=/*fopen("out.txt","wb");*/
 

/*long long int x,min,n=1,max,s=0;
double i;
//fscanf(FIN,"%lld",&x);
scanf("%lld",&
x);
min=max=x;
s+=x;
while(scanf("%lld",&x)==1)
{
	s+=x;
	if(x<min)min=x;
	if(x>max)max=x;
	n++;
}
 i=(double)s/n;
 //fprintf(FOUT,"%lld %lld %.2f",min,max,i);
 printf("%lld %lld %.2f",min,max,i);
 fclose(FIN);
 fclose(FOUT);
 return 0;
 
 }*/
  
  
#include <stdio.h>


int main()
{
	int min=0,max=0;
	do
	{
	int i,j,s=0,a[100];
	scanf("%d",&i);
	if(i==0) break;
	for(j=0;j<i;j++)
	scanf("%d",&a[j]);
	min=max=a[0];
	for(j=0;j<i;j++)
	{
		s+=a[j];
		if(a[j]<min) min=a[j];
		if(a[j]>max) max=a[j];
	}
	printf("%.2f,%d,%d\n",(double)s/i,min,max);
	printf("%d",j);
	
}while(1);

	return 0;
	
}
