# C_Class
### 2021-03-03 Iot Class daily report

##### 강의 3 분기문/반복문
<세가지 형태의 반복문>
while문에 의한 반복
do~while문에 의한 반복 (많이 사용X)
for문에 의한 반복 (가장 많이 사용)
```
///1부터 10까지 모두 더하기 
    int a=1;
    int b=10;
    int result=0; 
 
	while(a<=b)	//괄호 안에 조건식을 검색하여 그 조건식이  참(1)인 경우에는 {}안에있는 프로그램코드 수행, 
{              //수행 완료 후 다시 while로 돌아와서 다시 조건식 검색 후 수행. false가 될 때까지 무한 반복. 
               // (a<b)인 경우는 a가 b보다 작아야 하므로 a=9까지밖에 연산이 안됨. 따라서 <=로 해야 함.  
	result = result + a;
	a = a + 1;
	  //result += a++; -> result = result + a++;와 동일 
	  //a++; -> a = a + 1; 와 동일 
}

    printf("a = %d\nb = %d\n", a,b);   //원래의 a, b값이 표현되기를 원하면 while함수가 실행되기 전 위로 올리면 됨. 
    printf("result = %d\n", result);

    return 0;
}
```




