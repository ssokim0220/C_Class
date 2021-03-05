#include <stdio.h>
#include "20210304_Myheader.h"  // 나만의 헤더파일 생성 후 .h 형식으로 저장. 그리고 include 시켜줄 때 <>대신 ""사용 => 그 함수를 미리 선언 안해도 됨. 
                                // 헤더파일 저장시 함수원형 외에도 소스까지 모두 저장해놓으면 include만 시켜주면 일일히 구현할 필요 X.  

//void func1(int k);    //함수 원형 미리 선언. 이렇게 미리 선언해놓으면 func1 함수가 main함수 아래에 위치해도 가능.  



int main()
{
	int key;     // *key값을 입력받기 위한 변수 선언  
	int i, j, k;      // *자주 사용하는 변수들 미리 선언 - 습관   
	
	printf("key를 입력하세요.\n");
		
	while(1)       // *무한반복시 탈출 조건을 생각  
	{		
	    scanf("%c", &key);      // *단일문자 : %c  (character),  문자열 : %s (string) / scanf함수는 Enter키로 입력의 끝을 검사하기 때문에 단일문자 처리시 두번 입력으로 처리  
	    
	    if(key=='z') break;    // scanf에서 눌린 다음에 검사하는 것이므로 scanf 뒤에 위치  
	    if(key != 13) func1(key);     //  키보드 버퍼에 남아있는 Enter키 무시 (13 -> 캐리지 리턴 cr)   	
		  
	}
	
}

/*  헤더파일로 삽입. 
void func1(int k)    // 새로운 함수 선언. return값이 없는 함수(key를 입력하고 함수내에서 판별만하고 값을 리턴받지 않을 것이므로)  / 여기의 변수명과 아래 while 안에 func1()안의 변수명과 같을 이유가 없음.  / 다만 똑같은 int 데이터 타입 필요  
{
    if((k>='A') && (k<='Z'))    // 대문자인지 검사. ascii 코드값을 이용하여 검사. K>=65로 표기도 가능. and -> &&
	{
		printf(">%c : 대문자\n", k);
	  } 
	else if((k>='a') && (k<='z'))
	{
		printf(">%c : 소문자\n", k);
	 } 
	else if((k>='!' && k<='/') || (k>=':' && k<='@') || (k>='\[' && k<='`') || (k>='\{' && k<='~'))
	{
		printf(">%c : 특수문자\n", k);
	}
	
}
*/
