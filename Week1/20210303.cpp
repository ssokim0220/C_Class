#include <stdio.h>

int main()
{
/*
	int a, b;
	
	a = 10;
	b = 20;
	
	printf("a=%d\nb=%d\n", a,b);
	return 0;
*/	
	
/*		
	int a,b;
	int result;
	
	a=3;
	b=4;
	result=a+b;
	
	printf("a=%d\nb=%d\n", a,b);
	printf("������� : %d\n", result);
	return 0;	
*/	
/*	
	int a; 
	
	a=7;
		
    if(a>5);  //a�� 5���� ū�� 
    if(a<10); //a�� 10���� ������ 
	
	if((a>5)&&(a<10));	
*/	

///1���� 10���� ��� ���ϱ� 

// while���� �̿��� ��� 
/* 
    int a=1;
    int b=100;
    int result=0; 
    
   
    printf("������ ������ ����� ���� �� ���� �Է��ϼ���.\n");   // � ���� �Է��ؾ� �ϴ��� ���ÿ�. 
    scanf("%d %d", &a, &b);  // scanf������ % ������ �Ϲݹ���, �齽���� �� ���Ұ�/ &��ȣ ���� �տ� �ٿ����� (& : �� ������ �ּ� ��� ��)   
                             // scanf �Լ� ���� ���â���� a�� b���� �Է��ؾ� ������� ��µ�. 
    printf("%d���� %d ������ 5�� ����� \n", a, b);

    int t = a;       // t : ���� a�� �ʱⰪ ������ 
*/

/*
    int res1=0, res2=0;     // res1 : Ȧ����, res2 : ¦���� 
    for(int i=a; i<=b; i++)   //i : index
    {
    	if(i%2==0)   // % : ������ �������� 0�̶�� (¦��)   / if(i%2) �̷� ��� i�� 2�� �������� 0�� �ƴ϶��. �� Ȧ���� 
		{
			res2 += i;
		 } 
		 else     //Ȧ��
		 {
		 	res1 += i;
		  } 
		  if(i%5==0)   //5�� ������
		  {
		  	printf("%3d", i);
		   } 
	}
	printf("\n�Դϴ�.\n\n");   // �׳� �ٹٲ� 
    printf("�ݺ����� �̿��� ���� ���\n");
	printf("Ȧ���� �� : %d\n", res1);
	printf("¦���� �� : %d\n", res2);
	

    int res1=0, res2=0;   
    int res3=0, res4=0, res5=0, res6=0, res7=0, res8=0, res9=0;     
    for(int i=a; i<=b; i++) 
    {
    	if(i%9==0) res9=+-i;
		else if(i%8==0) res8+=i; 
	    else if(i%7==0) res7+=i;
		else if(i%6==0) res6+=i;
		else if(i%5==0) res5+=i;
		else if(i%4==0) res4+=i;
		else if(i%3==0) res3+=i;
		else if(i%2==0) res2+=i; 
		else res1 += i;
	}
	
	printf("9�� ����� �� : %d\n", res9);
	printf("8�� ����� �� : %d\n", res8);
	printf("7�� ����� �� : %d\n", res7);
	printf("6�� ����� �� : %d\n", res6);
	printf("5�� ����� �� : %d\n", res5);
	printf("4�� ����� �� : %d\n", res4);
	printf("3�� ����� �� : %d\n", res3);
	printf("2�� ����� �� : %d\n", res2);
	printf("������ ���� �� : %d\n", res1);
*/

    int n;   //������ �����ϸ� ���� ���ʿ��� ����. 
    
    for(int i=0; i<10; i++)
    {
    switch(i)
		{
			case 1:
				printf(">1 : one\n");
				break;
			case 2:
				printf(">2 : two\n");
				break;
			case 3:
				printf(">3 : three\n");
				break;
			case 4:
				printf(">4 : four\n");
				break;
			case 5:
				printf(">5 : five\n");
				break;
			case 6:
				printf(">6 :six\n");
				break;
			case 7:
				printf(">7 : seven\n");
				break;
			case 8:
				printf(">8 : eight\n");
				break;
			case 9:
				printf(">9 : nine\n");
				break;
			default:
				printf("�����ϼ̽��ϴ�.\n");
				break;
												
		}	
    	
    	
    	
	}
    
    
    
    
    
    
    while(1)   //0������ ������ ���ѹݺ��� ���̹Ƿ� �ϴ� ����loop  
	{
		printf("1~9���� ����Ű�� ��������. �����÷��� '0'Ű�� ��������.\n");
		scanf("%d", &n);   //& : �ּ� 
		
		if(n==0) break;  //if�Լ����� ���ٱ����� {} ��� ��.
		
		switch(n)
		{
			case 1:
				printf(">1 : one\n");
				break;
			case 2:
				printf(">2 : two\n");
				break;
			case 3:
				printf(">3 : three\n");
				break;
			case 4:
				printf(">4 : four\n");
				break;
			case 5:
				printf(">5 : five\n");
				break;
			case 6:
				printf(">6 :six\n");
				break;
			case 7:
				printf(">7 : seven\n");
				break;
			case 8:
				printf(">8 : eight\n");
				break;
			case 9:
				printf(">9 : nine\n");
				break;
			default:
				printf("�����ϼ̽��ϴ�.\n");
				break;
												
		}
	 } 
 
return 0;



}

/*  ���� 
    int a=1, b=10;   // scanf�� �ϴ��� a,b������ ����� ��. �ʱ�ȭ�� �� �ʿ䰡 ����. 
    printf("������ ������ ��� �μ� �Է�");
    scanf("%d %d", &a, &b);
    
    int res1=0, res2=0;
    for(int a; a<=b; a++)
    {
    	if(a%2!=0)
    	{
    		res1 += a;
		}
		else
		{
			res2 += a;
		}
	}
	printf("Ȧ���� �� : %d\n", res1);
	printf("¦���� �� : %d\n", res2);
	
	return 0;
}
*/








/*


    printf("\nȦ���� ��\n");
	while(a<=b)	    //��ȣ() �ȿ� ���ǽ�(����)�� �˻��Ͽ� �� ���ǽ���  ��(1)�� ��쿡�� {}�ȿ��ִ� ���α׷��ڵ� ����, 
{                   //���� �Ϸ� �� �ٽ� while�� ���ƿͼ� �ٽ� ���ǽ� �˻� �� ����. false�� �� ������ ���� �ݺ�. 
                    // (a<b)�� ���� a�� b���� �۾ƾ� �ϹǷ� a=9�����ۿ� ������ �ȵ�. ���� <=�� �ؾ� ��.  
	result = result + a;
	a = a + 2;
	                //result += a++; -> result = result + a++;�� ���� 
	                //a++; -> a = a + 1; �� ���� 
}

 // printf("a = %d\nb = %d\n", a,b);   //������ a, b���� ǥ���Ǳ⸦ ���ϸ� while�Լ��� ����Ǳ� �� ���� �ø��� ��. 
    printf("[while]���� �̿��� ���� ���\n");
    printf("a = %d\nb = %d\n", t,b);
    printf("result = %d\n", result);
    
    result = 0; //result�� �ʱ�ȭ
	

 
//For loop�� �̿��� ���
 
    int n;   // for loop ������ ������ ���������μ� {}��� �ۿ����� ��ȿ�ϵ��� ��. 
    a = t;   // ������ while�Լ��� ���� {}�� �������� a���� b(10)���� Ŀ�� 11�� ������. ���� for loop�� ����� 11�� �����̹Ƿ� a<=b ������ ���� �ʾ� ��� �ȵ�. 
	         // ���� ���� a�� �ʱⰪ�� t�� �����س����Ƿ�, t�� �ݴ�� �ٽ� ����ͼ� �Լ� ����. 
	 
	printf("¦���� ��\n"); 
    for(n=a;2*a<=b;a=a+1)
    {
	//for(t=a;a<=b;a++)  //for�� : (�ʱⰪ; ��������; ��������) �ʱⰪ(t)�� �̸� �������ֱ� ������ ���� �ʱⰪ ����  �� �ʿ�x
	                     // for(int n=a;a<=;a++)�ε� ǥ�� ���� / *int n=a�� ������ ���� {} �ȿ����� ��ȿ��. ���� {} �ۿ����� ��ȿ�ϵ��� �����ؾ� ��  
    result += 2*a;	
    	
	}

 
    printf("[for]���� �̿��� ���� ���\n");    
    printf("a = %d\nb = %d\n", n,b);
    printf("result = %d\n", result);

    return 0;
}

/* if�� -> while��(�ݺ�)�̶� ���� / ���������� �����Ѵٸ� - ��ȸ�� 
   if(���� ����)
   {
   ���� ������ �����ϰ��� �ϴ� ����
   } 
   else
   {
   ���ǺҸ����� �����ϰ��� �ϴ� ����
   }
   
   if(odd) Ȧ��
   {
   for()...
   }
   else   //even ¦�� 
   {
   for()...
   }

   *if �� else ���̿� else if�� ��� ��� ���� 


<���ǿ�����>
   X=(Y>0)?a*b;a/b; �ǹ�
    
   if(Y>0) 
   X=a*b;
   else
   X=a/b;



<while ����>
break : �� �� ���� �����Ͽ� �������� ��  

while(1)  -> ���ѹݺ� 1�� true�̹Ƿ�
while(1) ���ѷ����� �����س��� ���� �ȿ��� ������ 
{
....
if(x<0)
break; 
}

continue : � ������ �����ؼ� ���� �� �Ʒ������� �� �ʿ䰡 ���� ��  �ٽ� ������ ���� ���.
           



switch(n)        <- swith loop ���⼭ n�� ���ǽ��� �ƴ�. only �������� ����. �Ǽ��� �Ұ�. ���� �б� ����Ʈ ���� case. �� case�� �����ϴ� �ð��� ��� ����. case �ڿ� �����ݷ�;��� �ݷ�:���.  
{
case 1 : 
n�� 1�� ��� ����Ǵ� ����
break;

case 2 :
 n�� 2�� ��� 
 break; 
.
.
.
default
�ش� case ���� �� ����Ǵ� ���� 
}


*/   










