# C_Class
### 2021-03-03 Iot Class daily report

##### 강의 3 분기문/반복문
<세가지 형태의 반복문>

- while문에 의한 반복

- do~while문에 의한 반복 (많이 사용X)

- for문에 의한 반복 (가장 많이 사용)
```
=================================================================
ex) while문을 이용한 계산 

    int a=1;
    int b=100;
    int result=0; 
    
   
    printf("범위의 누적값 계산을 위한 두 수를 입력하세요.\n");   // 어떤 값을 입력해야 하는지 지시용. 
    scanf("%d %d", &a, &b);  // scanf에서는 % 제외한 일반문자, 백슬래시 등 사용불가/ &기호 변수 앞에 붙여야함 (& : 그 변수의 주소 라는 뜻)   
                             // scanf 함수 사용시 출력창에서 a와 b값을 입력해야 결과값이 출력됨. 
    printf("%d에서 %d 사이의 5의 배수는 \n", a, b);

    int t = a;       // t : 변수 a의 초기값 보관용 
==================================================================

    int a=1;
    int b=100;
    int result=0; 
    
    printf("범위의 누적값 계산을 위한 두 수를 입력하세요.\n");  
    scanf("%d %d", &a, &b); 
                            
    int res1=0, res2=0;     // res1 : 홀수합, res2 : 짝수합 
    for(int i=a; i<=b; i++)   //i : index
    {
    	if(i%2==0)   // % : 나누고 나머지가 0이라면 (짝수)   / if(i%2) 이런 경우 i를 2로 나눈것이 0이 아니라면. 즉 홀수값 
		{
			res2 += i;
		 } 
		 else     //홀수
		 {
		 	res1 += i;
		  } 
		  if(i%5==0)   //5의 배수라면
		  {
		  	printf("%3d", i);
		   } 
	}
	printf("\n입니다.\n\n");   // 그냥 줄바꿈 
        printf("반복문을 이용한 누적 계산\n");
	printf("홀수의 합 : %d\n", res1);
	printf("짝수의 합 : %d\n", res2);
	
============================================================================
  
  
    int a=1;
    int b=100;
    int result=0; 
    
    printf("범위의 누적값 계산을 위한 두 수를 입력하세요.\n");  
    scanf("%d %d", &a, &b); 
  
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
	
	printf("9의 배수의 합 : %d\n", res9);
	printf("8의 배수의 합 : %d\n", res8);
	printf("7의 배수의 합 : %d\n", res7);
	printf("6의 배수의 합 : %d\n", res6);
	printf("5의 배수의 합 : %d\n", res5);
	printf("4의 배수의 합 : %d\n", res4);
	printf("3의 배수의 합 : %d\n", res3);
	printf("2의 배수의 합 : %d\n", res2);
	printf("나머지 수의 합 : %d\n", res1);
=================================================================
    int n;   //변수는 웬만하면 가장 앞쪽에서 선언. 
    
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
				printf("수고하셨습니다.\n");
				break;
												
		}	    	
	}
    
=> 
>1 : one
>2 : two
>3 : three
>4 : four
>5 : five
>6 :six
>7 : seven
>8 : eight
>9 : nine    
    
    
   int n; 
    
    while(1)   //0누르기 전에는 무한반복할 것이므로 일단 무한loop  
	{
		printf("1~9까지 숫자키를 누르세요. 끝내시려면 '0'키를 누르세요.\n");
		scanf("%d", &n);   //& : 주소 
		
		if(n==0) break;  //if함수에서 한줄까지는 {} 없어도 됨.
		
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
				printf("수고하셨습니다.\n");
				break;
												
		}
	 } 
 
return 0;
}

=> 결과 : 숫자를 누르면 해당하는 영어단어 출력
==============================================================

/*  연습 
    int a=1, b=10;   // scanf를 하더라도 a,b선언은 해줘야 함. 초기화를 할 필요가 없음. 
    printf("범위의 누적값 계산 두수 입력");
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
	printf("홀수의 합 : %d\n", res1);
	printf("짝수의 합 : %d\n", res2);
	
	return 0;
}
*/








/*


    printf("\n홀수의 합\n");
	while(a<=b)	    //괄호() 안에 조건식(논리식)을 검색하여 그 조건식이  참(1)인 경우에는 {}안에있는 프로그램코드 수행, 
{                   //수행 완료 후 다시 while로 돌아와서 다시 조건식 검색 후 수행. false가 될 때까지 무한 반복. 
                    // (a<b)인 경우는 a가 b보다 작아야 하므로 a=9까지밖에 연산이 안됨. 따라서 <=로 해야 함.  
	result = result + a;
	a = a + 2;
	                //result += a++; -> result = result + a++;와 동일 
	                //a++; -> a = a + 1; 와 동일 
}

 // printf("a = %d\nb = %d\n", a,b);   //원래의 a, b값이 표현되기를 원하면 while함수가 실행되기 전 위로 올리면 됨. 
    printf("[while]문을 이용한 누적 계산\n");
    printf("a = %d\nb = %d\n", t,b);
    printf("result = %d\n", result);
    
    result = 0; //result값 초기화
	

 
//For loop을 이용한 계산
 
    int n;   // for loop 이전에 변수를 수행함으로서 {}블록 밖에서도 유효하도록 함. 
    a = t;   // 위에서 while함수가 끝난 {}끝 시점에서 a값은 b(10)보다 커진 11의 상태임. 따라서 for loop를 실행시 11인 상태이므로 a<=b 조건이 맞지 않아 계산 안됨. 
	         // 따라서 변수 a의 초기값인 t를 보관해놨으므로, t를 반대로 다시 갖고와서 함수 진행. 
	 
	printf("짝수의 합\n"); 
    for(n=a;2*a<=b;a=a+1)
    {
	//for(t=a;a<=b;a++)  //for문 : (초기값; 수행조건; 증감연산) 초기값(t)를 미리 선언해주기 때문에 따로 초기값 선언  할 필요x
	                     // for(int n=a;a<=;a++)로도 표현 가능 / *int n=a로 선언한 것은 {} 안에서만 유효함. 따라서 {} 밖에서도 유효하도록 설정해야 함  
    result += 2*a;	
    	
	}

 
    printf("[for]문을 이용한 누적 계산\n");    
    printf("a = %d\nb = %d\n", n,b);
    printf("result = %d\n", result);

    return 0;
}

/* if문 -> while문(반복)이랑 유사 / 실행조건을 만족한다면 - 일회성 
   if(실행 조건)
   {
   조건 만족시 실행하고자 하는 내용
   } 
   else
   {
   조건불만족시 실행하고자 하는 내용
   }
   
   if(odd) 홀수
   {
   for()...
   }
   else   //even 짝수 
   {
   for()...
   }

   *if 와 else 사이에 else if로 계속 사용 가능 


<조건연산자>
   X=(Y>0)?a*b;a/b; 의미
    
   if(Y>0) 
   X=a*b;
   else
   X=a/b;



<while 종료>
break : 어 떤 조건 만족하여 빠져나올 때  

while(1)  -> 무한반복 1은 true이므로
while(1) 무한루프로 설정해놓고 수식 안에서 조건을 
{
....
if(x<0)
break; 
}

continue : 어떤 조건을 만족해서 굳이 그 아래과정을 할 필요가 없을 때  다시 앞으로 가는 경우.
           



switch(n)        <- swith loop 여기서 n은 조건식이 아님. only 정수값만 가능. 실수도 불가. 각각 분기 포인트 존재 case. 각 case에 도달하는 시간이 모두 동일. case 뒤에 세미콜론;대신 콜론:사용.  
{
case 1 : 
n이 1인 경우 실행되는 영역
break;

case 2 :
 n이 2인 경우 
 break; 
.
.
.
default
해당 case 없을 시 실행되는 영역 
}



```




