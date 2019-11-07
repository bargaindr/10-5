//用while循环计算1++++++++..+100;
#include <stdio.h>
int main(){
         
	int i=1;
	int he=0;

	while(i<=100)
	{

		he=he+i;
		i++;
	}
    printf("1-100的和为%d\n\n",he);



      return 0;
}