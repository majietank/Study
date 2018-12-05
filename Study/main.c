#include<stdio.h>
void sj()
{
	int high;
	printf("输入高：");
	scanf_s("%d",&high);
	if(high%2==1){
	for (int a = 0; a < high; a++) {
		for (int b = 1; b < high*2; b++) {

			if (b < high&&b + a < high || b >= high && b - a >= high + 1) {
				printf(" ");
			}
			else
			{				
				printf("*");
			}			
		}
		printf("\n");
	}
	}
	else
	{
		printf("error，偶数无法实现等腰三角形。\n");
	}
}
int main()
{
	int a=11/2;
	printf("Hello!\n");
	printf("%d\n",a);
	sj();
	/*printf("Hello!!\ttest\tdone\n");
	printf("Github test,write!");
	printf("Visual Studio 2017,yee");
	printf("Visual Studio Code,yes");*/

	return 0;
}
