/*====================================================================
  #include <stdio.h>


int main(void)
{
	int a = 10;
	int *pA = &a;
	 
	 
	void *vp;   // void pointer는 몇바이터라는 규정이 되어있지 않기 때문에 vp++라 하면 바이트수에 상관없이 +1이 됨. 데이터타입에 따른 연산 결과 고려. 
	
	vp = pA++; // pA가 증가하기 전의 주소가 들어감 
	printf("vp : %08x \n", vp++);   // vp : void pointer 정해지지 않은 주소 포인터 
	printf("vp : %08x \n", vp++);
	
	
	
}
===================================================================*/

// double *b 선언은  double b[] 선언과 같음 
// 

//배열 이름 타입   int arr1[10]  -> int *  /  double arr2[20]   ->   double * 과 같음 



// int *pA = 100; // system area. 포인터 선언시 임이의 정수를 입력하면 안됨. 100이 주소 어딘지 모름.  
// DMA (Direct MeMORY aCCESS) 메인보드 버스 에서 그래픽카드와 메인보드가 서로 데이터를 주고받을 수 있도록 할때는 사용. 



/*============================================================================================
#include <stdio.h>

void swap(int *a, int *b);
int GetMin(int *p, int n);   // *p는 p[]와 같음 

int main(void)
{
	
	int arr[5];   // 키보드를 입력할 것이므로 초기화x 
	int min;
	
	while(1)
	{
	printf("5개의 정수를 입력하시오.\n");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);	//arr에 [0]이 붙어있으면 변수와 같음. 따라서 변수의 주소 를 입력해줘야 함.  
	
	min = GetMin(arr,5); //arr라는 배열변수에 5개의 데이터값이 있다.  리턴값이 주어지는 함수이므로 사용하기 전에 선언되어야함. 
	printf("입력된 숫자중 가장 작은 값은 : %d 입니다.\n", min); 
	
	printf("------------------------------------------------\n"); 
	printf("입력된 숫자 중 처음 두 수는  %d과%d 입니다\n", arr[0], arr[1]);
	swap(&arr[0], &arr[1]);    // swap(arr+0, arr+1);과 동일 +0은 의미가 없으므로 생략 가능. 
	printf("입력된 숫자 중 처음 두 수를 교환하면,  %d과%d 입니다\n", arr[0], arr[1]);  
			
	}
	
	
}


int GetMin(int *p, int n)
{
	int minimum = *p;   //주어진 값의 가장 첫번째 값을 초기값으로 설정.  여기에서의 minimum은 위의 min과 같을 필요 없ㅇ듬. 
	int i, j, k;
	
	for(i=0; i<n; i++)
	{
		if(minimum > *(p+i))  minimum = *(p+i);   // 포인터 p의 i번째요소 
//	    if(minimum > p[i])  minimum = p[i]);     위와 같음. 
	}
	return minimum;
		
}


// <Sorting - 정렬>
 
// SWAP : 두개의 변수 a와 b의 교환
// a = 10;  b = 20;
// a = b;  b = a;   <==  a에 b를 대입을 하고 b에 a를 대입하려는 순간 이미 a는 20이 들어가있음. 
// a와 b를 교환하기 위해서는 새로운 c라는 변수가 필요함.
// c = a;  c에다가 a라는 변수 원본을 저장.
// c = a;  a = b;  b = c; 

// SWAP 함수 만들기

void swap(int *a, int *b);  // 리턴값 없음, swap이라는 이름의 함수에 정수값 두개 입력받음.   받는 것 자체를 포인터를 이용해서 받음.  
void swap(int *a, int *b)
{
	int c = *a;   //포인터 a라는 값의 값을 c라는 변수 초기화.
	*a = *b;
	*b = c; 
}


//swap 함수 확장
 
void iswap(int *a, int *b);  // 리턴값 없음, swap이라는 이름의 함수에 정수값 두개 입력받음.   받는 것 자체를 포인터를 이용해서 받음.  
void fiswap(int *a, int *b)
{
	int c = *a;   //포인터 a라는 값의 값을 c라는 변수 초기화.
	*a = *b;
	*b = c; 
}

=====================================================================*/

// 두수를 입력받아 최대공약수를 출력하는 프로그램 작성.  1. % 나머지 활용   2. 수를 비교하는 배열함수 활용.
// 

#include <stdio.h>


int GetCD(int num1, int *arr1);
//int GetGCD(int n1, int n2);
int GetGCD2(int *arr1, int n1, int *arr2, int n2);
int main()

{
	int num1, num2;
	int n1, n2;   // 각각의 약수의 갯수 저장.
	int MaxNum;  
	int arr1[100], arr2[100];  // 두 수의 약수 저장 할 배열. 
	
	printf("두 수를 입력하시오.\n");
	scanf("%d %d", &num1, &num2);
	
	n1 = GetCD(num1, arr1);   // num1은 정수, arr1은 그 정수의 주소 즉 포인터. 
	n2 = GetCD(num2, arr2);    
	
	MaxNum = GetGCD2(arr1, n1, arr2, n2);   // arr1과 arr1의 갯수  
	
	printf("%d의 약수 : ", num1);     //각 약수들 나열  
	for(int i=0; i<n1;i++)
	{
		printf("%d ", arr1[i]);    //arr1의 i번째 요소 
	}
	
		printf("\n%d의 약수 : ", num2);
	for(int i=0; i<n2;i++)
	{
		printf("%d ", arr2[i]);    //arr2의 i번째 요소 
	}
	
	printf("\n%d와 %d의 최대공약수는 %d 입니다.\n", num1, num2, MaxNum);
}




int GetCD(int num, int *arr)    
{
	int i, j, k;
	
	for(i=1, j=0; i<=num; i++)
	{
		if (num%i == 0) // *arr++=i;   // num1의 약수    *arr++=i;    는     *arr = i;   arr++;와 같음. 
		{
			*(arr+j) = i;   // i 는 for루프 안에서 증가 
			j++;    //j : 누적 인덱스를 따로 갖기 위해서. if문 안에서 j가 증가. array의 값이 쌓일 때마다 j가 증가. 인덱스는 0베이스를 갖으므로 j=0  
		}
    }
    return j;
	
}



int GetGCD2(int *arr1, int n1, int *arr2, int n2)
{
	int i, j, k;
	
	for(i=n1-1;i>=0;i--)    // arr의 갯수가 n1이지만 위치는 0부터 이므로 n1-1로 하고 조건범위도 >=  
	{
		for(j=0; j<n2; j++)   // arr2는 앞에서부터 서치해도 됨. 
		{
			if(*(arr1+i) == *(arr2+j))  return *(arr1+i);
		}
	}
	return -1;    //만약 일치하는 것이 없다면 오류가 발생한다는것을 사용자에게 알려줌.  
}

/*============================================
int GetGCD(int n1, int n2);
{
	
	for(i=n1, i>0; i--)
	{
		if(n1%i == 0 && n2%i == 0)  return i;
	}
	
}
=============================================*/
/*
구조체 변수의 초기화 : 배열 초기화 문법과 비슷 


printf("name : %s\n", (*pMan).name);

printf("name : %s\n", pMan -> name);  // pMan 자체로만 사용하려면 -> 활용. 
*/






