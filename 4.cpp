/*
"水仙花数"是指一个3位数，其各位数字立方和等于该数本身。例如，153是一个水仙花数，因为153 = 13 + 53 + 33
输入一个三位数，判断其是否为水仙花数
*/

#include <stdio.h>
#include <math.h>

int main()
{
        int x;
		int one;
		int two;
		int three;
		int y=0;
		scanf("%d",&x);
		if(x<=999)
		{
		      one=x*0.01;
			  two=x*0.1;
			  two=two%10;
			  three=x%10;
			  three=three%10;

               y=pow(one,3)+pow(two,3)+pow(three,3);
			  
			  

			   
			   
			  if(y!=x)
				   
			   {
				   printf("输入的数不是水仙花\n\n");
			   }

			   else
				   printf("输入的数是水仙花\n\n");
			  


		}
		else
		{	printf("怎么我李云龙说话不算话？\n\n");
		    printf("柱子，你特娘的眼瞎啊\n\n");
			printf("让你输入几位数？啊\n\n");
			printf("重新输入\n\n");}
     


      return 0;

}