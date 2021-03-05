#include <stdio.h>

/*
int main(void)
{
	
	double total;
	double val[5];   // 방의 갯수 : 5, 방 번호는 0번부터 시작.
	
	val[0]=1.01;
	.
	.
	
	
	int arr1[5]={1, 2, 3, 4, 5};    //선언과 동시에 초기화
	int arr2[]={1, 3, 5, 7, 9};    // 컴파일러가 방이 몇개가 필요한지는 모르는데 데이터가 5개 있으므로 컴파일러가 알아서 방 5개로 초기화. 
	int arr3[5]={1, 2}            // 방 5개는 잡았는데 데이터가 2개이므로 앞에서부터 순차적으로 2개 방 채운 후 나머지는 쓰레기값. 
	
	
	
//	char str1[]="Good";    //str1을 Good으로 초기화
    char str1[5]={'G','O','O','O','D'};     
	char str2[]="Morning";
	
	printf("%s\n", str1); 
	printf("%s %s \n", str1, str2);
	
	return 0;
	*/
	
	
	
/*==============================	
	
int main(void)
{
	
	int i;
	char ch;
	char str[6] = "Hello"; 
	
	printf("--변경 전 문자열--\n");
	printf("%s \n", str);
	
	for(i=0; i<6; i++)
	{
		printf("%c |", str[i]);
	}
	
	//문자열 변경
	for(i=0; i<3; i++)
	{
		ch=str[4-i];
		str[4-i]=str[i];
		str[i]=ch;
	 } 
	
	printf("\n\n--변경 후 문자열--\n");
	printf("%s \n", str);
	
	return 0;
	
 } 
}

==================================================*/


/*===========================================================

int main(void)
{
	char buf[1024];    // buffer / 사용자를 고려하여 방 갯수를 충분히 잡아줌.  
	int i, j, k;
	while(1)
	{
	scanf("%s", buf);   // 여기서 array인  buf는 이름표가 아니라 방 주소를 포함하고 있음. 따라서 주소를 받기위해 붙였던 &를 안붙임.  
	printf("입력문자열: %s\n\n", buf);		
	}
		
}

================================================================*/
/*
//  scanf 이용해서 문자열을 받아 한문자씩 띄어서 출력하세요. (char 배열 이용) "abcde"  => "a b c d e"
// 대소문자가 혼합된 문자열 모두 대문자로 일괄 변환 

void ConvertChar(char buf[]);   //  함수 프로토타입 선언. 캐릭터 배열로 받으므로. 

int main()
{
	char buf[1000];
	int i, j, k;
	
	while(1)
	{
	scanf("%s", buf);    
	printf("입력문자열: %s\n\n", buf);
	ConvertChar(buf);
	
	break;		
	}	
	
}


void ConvertChar(char buf[])     // 새로운 함수 사용. 

{
	int i, j, k;
	
	for(i=0; buf[i] != 0; i++)    // i -> 캐릭터 배열의 index로 사용. i를 한정시켜놓으면 그 크기밖에 수용 못하므로. 조건 자체가 buf[i] 의미 : buf array 자체 i열의 문자가 값이 0이면 for loop를 빠져나와라. 
	{
		char a = buf[i];
		if(a>96 && a<123) a -= 32;   // a가 소문자라면,  아스키코드에서 대문자와 소문자의 헥사 차이는 20이므로 10진수로는 32. 따라서 32만큼 빼주면 소문자 => 대문자로 변환됨.  
		printf("%c ", a);
	}
}

================================================================*/
/*
int main()
{
	
	
	,a[0]);  // 배열 주소 
	*(a+0)); // 포인터 주소 
	
	a[1][0], (*(a+1))[0]);
	// {1, 2}
	    
	
	
}

=================================================================*/

#include <stdio.h>
#include <conio.h>  //새로운 콘솔용 헤더 
#include "20210304_Myheader.h"


void CharPos(char buf[], int n);   //  함수 프로토타입 선언. 캐릭터 배열로 받으므로. 

int main()
{
	char buf[1000];   //문자 입력받는 버퍼 
	int i, j, k;   
	
	scanf("%s", buf);    // Enter 키를 눌러서 값을 되돌림. 인덱싱할 문자 입력. 
	printf("입력문자열: %s\n\n", buf);
	
	while(1)
	{
	char ch = getch();    // 눌러진 단일 키값을 되돌림. 원래는 int로 되돌려지는데 앞에서 char ch로 지정했으므로 문자로 char로 되돌려짐. 1을 누르면 1의 아스키코드값이 눌려짐. 
	if(ch<48 || ch>57) break;   //숫자키패드 이외 키가 눌리면 프로그램 종료.     
	CharPos(buf, ch-48);   // ch-48 : 숫자 키값을 index 값으로 변환. 
		
	}	
	
}


void CharPos(char buf[], int n)    //캐릭터 버퍼를 어레이[]로 받아줘야 함. 
{
	printf("%s (%d) ---> %c\n\n", buf, n, *(buf+n));   // buf[n]  / buf 문자열을 입력했을 때 n번째 숫자는   
	
}












































