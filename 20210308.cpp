 
/*===============================================================  아스키코드표 

//아스키 코드표 : char함수로 = 1byte = a, n 등 문자들 
//총 128개의 캐릭터. 4개로 나누면 한줄에 32개씩 딱 떨어짐. 
//printf 함수의 문자 변환자 (%c)이용. 

 
#include <stdio.h>

int main()
{
	int i,j,k;
	
	for(i=0; i<128; i++)
	{
	printf("%3d [%02x]: %c\n", i, i, i);   // 50이라는 코드값을 출력했더니 '아라비아문자 2(숫자 2 아님)'가 나옴.	
	                                    // %3d : 숫자를 받는데 미리 3자리를 차지하도록 한다. %02x : 16진수. 2자리 차지/앞에 빈자리는 0으로. 
	}
	
}
================================================================*/

/*====================================================================
//아스키 코드표 5칸으로 출력.
// 7, 8, 9, 10, 13 코드 예외처리 : ' ' 

#include <stdio.h>

int main ()
{
    int i, j, k, m, m1;
    int n = 5;    // 칸 수. 
	k = (128-1)/n+1;   // 1칸에 찍히는 줄 수 : (출력갯수-1)/칸수+1    128을 5로 나눈다 해도 5칸 외에 4개가 남으므로 칸이 모자름. 따라서 +1 해줌. 

    for(i=0; i<k; i++)
    {
      	for(j=0; j<n; j++)  // j는 칸수만큼 증가하면서 계산하므로 j<n 
      	                   // for(j=1; j<128; j+=k) 이런식으로도 계산 가능. 그러면 아래 m=i+j*k; 식은 필요하지 않음. 
	    {
	    m = i+j*k;      // j칸(column)에 i줄(row)에 출력될 문자. 
	    m1 = m;
	    if(m==7 || m==8 || m==9 || m==10 || m==13) m1 = ' ';   // m1 = 32, m1 = 0x20  같음 표현. 
		if(m<128)     // 127번까지만 출력. 128 이상부터는 미출력. 
	    	{
			printf(" %3d [%02x] : %c   |", m, m, m1);     // 7 8 9 10 13 번은 화면에 보여지지 않는 것이기 때문에 특수한 예외처리 필요. 
	    	}
	    	
		}
		printf("\n");	
	}
	  

}
	
===================================================================*/

/*=====================================================================

// 함수의 정의 : 
//  함수명 : sorting  (int *array, int count);  함수의 프로토타입.  인풋으로 들어가는 두가지의 argument. 
// return type : int : 0 (normal인 경우) / 만약 특별한 오류시, : -1 (Error). (웬만하면 void는 하지 않는것이 좋음)		 
// input : int *array (정수 배열), count 배열요소 갯수 

// Sorting : 데이터 정렬   ==> 배열 / 원본은 최대한 보관. 
// 1,3,5,7,9,2,4,6,8,0   -->  0,1,2,....7,8,9
// 성적처리 : 총점, 평균 기준으로 등수 판정  --> 순서대로 출력
// 하나의 데이터를 나머지 데이터와 비교하여(for loop를 이용해서 index를 잡음)  가장 작은 수와 swap. -> 첫번째 작은 수는 제외하고 두번째수와 나머지 수를 비교하여 가장 작은것을 찾아서 swap.
// 1. 배열에 데이터를 탑재  -->  입력, 파일로드, DB etc......
// 2. 인덱스에 따라 이후의 데이터와 비교  -->  가장 작은 값 or 가장 큰 값과 swap.
// 3. 배열 전체에 대하여 2번 과정을 반복. 


#include <stdio.h>
#include "20210304_Myheader.h" 

int sorting(int *array, int count);

int sorting(int *array, int count)     //array 받을 때에는 포인터 or 배열 형태로 받아야 함. 
{
	int i, j, k;
	for(i=0; i<=count-1; i++)   // 경계조건 : i가 0부터 count 까지/ 제일 앞에있는 데이터부터 시작해서 . 첫번재 index : i. *index : 참조변수 (계속 값이 변하면서 비교) 
	{
		for(j=i+1; j<count; j++)   // 배열의 나머지, 따라서 j는 i 뒤에있는 나머지 비교대상.  
		{
			if(*(array+i) > *(array+j))   // array[i] 
		    swap(array+i, array+j);   // swap에서는 그 주소를 받기 때문에 포인터 X. call by reference. 
			// if(i>j) swap(&i, &j);  와 같음.  
		}
	} 
}

int main()
{
	int i, j, k;
	int arr[] = {1,3,5,7,9,2,4,0,8,6};    // 배열의 초기화를 위해 중괄호를 사용시에는 끝에 ; 꼭 붙임.
	
	int n = sizeof(arr)/sizeof(int);    // sizeof --> 함수X. 매크로 함수. 매크로는 수행시가 아니라 컴파일링시 확인. 따라서 메인함수 내에서 이렇게 사용 가능.
	                                    // int n = 40/4 가 됨. 
										// 위에 sorting함수에서 이렇게 사용시 int n = 8/4가 됨. 사용불가.  
    printf("원 데이터 : \n");
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	
	sorting(arr,n);   // arr과 count. sorting 한 후. 
	
	printf("정렬 데이터 : \n");
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	
} 
===================================================================*/
/*===================================================================
// fgets 함수와 atoi 함수를 이용하여 키보드로부터 숫자키를 입력받고 이를 10진 정수로 변환하는 프로그램.

#include <stdio.h>
#include <string.h>

int main()
{
	int num;
	char str[1000];
	
	fgets(str, sizeof(str), stdin);
	printf("입력 문자열은 '%s'입니다.\n", str);
	


	
} 

==================================================================*/

// int Prompt (char*pt, int*ret);  scanf처럼 주소를 받음.
// return type : int : 입력된 정수값, 동일한 값이 ret에도 전달.
// input : char*pt : 출력문자열(안내문자)
//       : int*ret : 반환할 정수 변수의 주소  
// pt로 입력받은 문자열을 출력하고(입력 안내문자), 입력된 정수 문자열을 숫자로 변환하여 ret 값으료 반환. 
// + 함수의 return값으로 처리. 2개의 값을 입력 처리. %d가 두개. 
// ex)   scanf(" %d", &r);
//       A=r;
//		 ===> A = Prompt(" 입력하세요 : ", &r); 
// A=Prompt("입력하세요 : ", &r);   반환받을 입력값.  


/*============================================================
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Prompt (char*pt, int*ret);

int Prompt (char*pt, int*ret)
{
	char buf[254];    //char 문자를 받을 버퍼 설정. 
	printf("%s", pt);
	
	fgets(buf, 254, stdin);    // (버퍼,최대길이,어디서부터 받아들이는지)  버퍼를 이용해서 키보드로부터 최대길이 254의 문자를 받을 수 있음.
	*ret = atoi(buf);  // int r
	return *ret;   // 함수값으로 return 
	 
}

int main()
{
	int a, b, c;
	Prompt("A를 입력하세요", &a);
	c = Prompt("B를 입력하세요", &b);   // b는 주소로 값을 받고, c는 리턴값으로 받음.  
	
	printf("A:%d  B:%d  C:%d",a,b,c);
	
	
}

==============================================================*/


/*================================================================
// 캐릭터포스 함수. 위치를 찾아주는 함수. 
//함수명 : int chrPos(char*str, char chr);
// return type : int : chr 문자의 위치, 없다면 -1
// input : char *str : 대상 문자열
//         char chr : 찾을 문자
// 기능 : str로 전달된 문자열중에서 chr 문자를 검색하여 해당 위치를 반환 (zero base)
// 검색되지 않으면 -1을 반환. 


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int chrPos(char*str, char chr); 

int chrPos(char*str, char chr)
{
	// *str = "abcdefghijklmn";   chr='d';
	int i,j,k;
	i=0;
	while(*(str+i))
	{
		if(*(str+i++) == chr)  return i-1;   // str i번째 변수의 값의 +1이 문자변수 chr과 같은지? / 이미 위에서 i는 break 하기 전에 +1이 되어있으므로 반환시 -1을 해주고 반환.
	}
	return -1;
	
}


int main()
{
	int a,b,c;
	
	char *str = "abcdefghijklmn";
	printf("문자열 : %s\n", str);
	printf("%c의 위치는 %d 입니다.\n", 'e', chrPos(str,'e'));   // 4
    printf("%c의 위치는 %d 입니다.\n", 'o', chrPos(str,'o'));	// -1
}


=================================================================*/
int chrPos(char*str, char chr)
{
	
	for(int i=0; *(str+i); i++)    // *(str+i)!=NULL 의 경우 0이 되면 false이므로  
	{
		if(*(str+i) == chr)  return i;
	}
	return -1;
}


// 문자열을 찾아주는 함수.  위치를 찾아주는 함수. 
//함수명 : int strPos(char*str, char *s1);
// return type : int : s1 문자의 위치, 없다면 -1
// input : char *str : 대상 문자열
//         char s1 : 찾을 문자열 
//기능 :  str로 전달된 문자열중에서 s1 문자열을 검색하여 해당 위치를 반환 (zero base)
// 검색되지 않으면 -1을 반환.
// str chrPos 함수를 이용하여 첫번째 문자를 찾은 후 strncmp 이용. 
//----------------로직 구현--------------------- 
// 1. str에서 s1의 첫 문자가 있는 위치 검색.
// 2.  해당 위치에서 strncmp를 이용하여 비교. 같으면 return i; 아니면 다시 1번. 
// 3. 만일 끝까지 없으면 -1 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strPos(char*str, char *s1); 

int main()
{
	int a,b,c;
	
	char *str = "abcdefgacdbhijklmn";
	char *s1 = "acdb";
	printf("문자열 : %s\n", str);
	printf("%s의 위치는 %d 입니다.", s1, strPos(str, s1));
	
}



int strPos(char*str, char *s1)
{
	// *str = "abcdefgadbhijklmn"; s1='acdb';   ret : 7
	int i,j,k,p;
	
	
	for(i=0; *(str+i); i+=p+1)  // 그냥 i++할 경우, 첫번째 a와 7번째 a가 다르면 p는 6, i는 1인 상태로 리턴. 1번째 위치부터 계속 서치해야되는 수고를 덜기 위해서, 7번째 위치부터 다시 시작. 
	{
		p = chrPos(str+i,*s1);   // str에서 (*s1 : s1의 첫번째 문자)를 찾음 --> p / loop를 반복할 때 str의 i번째 위치를 서치했을 때 상대적인 위치를 나타냄. 
	    if (p==-1) return -1; 
    	if (strncmp(str+p+i,s1,strlen(s1)) == 0)  return p+i;     
		          // str의 p 위치에서 그게 s1의 문자와  문자길이 strlen만큼 완전히 일치하다면 
		          // i 위치를 0 base로 서치를 하므로 그만큼 더해줘야 함. 따라서 p위치에서 i만큼 더해줌. 
	}
	
	
}


