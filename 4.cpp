/*
"ˮ�ɻ���"��ָһ��3λ�������λ���������͵��ڸ����������磬153��һ��ˮ�ɻ�������Ϊ153 = 13 + 53 + 33
����һ����λ�����ж����Ƿ�Ϊˮ�ɻ���
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
				   printf("�����������ˮ�ɻ�\n\n");
			   }

			   else
				   printf("���������ˮ�ɻ�\n\n");
			  


		}
		else
		{	printf("��ô��������˵�����㻰��\n\n");
		    printf("���ӣ����������Ϲ��\n\n");
			printf("�������뼸λ������\n\n");
			printf("��������\n\n");}
     


      return 0;

}