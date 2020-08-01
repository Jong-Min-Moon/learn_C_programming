#include <stdio.h>
int main(void){

    //정수형 변수
    int age = 12; //변수. 변할 수 있는 값. 처음 선언할 때는 변수 타입 필요
    printf("%d\n", age);
        // %d: comma 뒤의 정수값을 출력
    
    age = 13; //한 번 변수 타입 선언한 후에는 언급할 필요 없음
    printf("바뀐 값: %d\n", age);


    //실수형 변수
    float weight = 46.5f;
    printf("몸무게: %.2f\n", weight); 

    double weight2 = 4.427;
    printf("%.3lf\n", weight2);


    //상수
    const int YEAR = 2000;
    printf("태어난 연도 : %d\n", YEAR);



    //printf
    //연산
    int add = 3 + 7; 
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d \n", 3, 7, 3+7);
    
    //scanf
    //키보드 입력을 받아서 저장
    int a;
    printf("값을 입력하세요\n");
    scanf("%d", &a);
    printf("입력값: %d\n", a);

    int b,c,d;
    printf("3개의 정수를 입력하세요:");
    scanf("%d %d %d", &b, &c, &d);
    printf("첫번째: %d, 두번째: %d, 세번째: %d\n", b, c, d);



    //문자(한 글자), 문자열(한 글자)
    char achar = 'A';
    printf("%c\n", achar);

    char str[256];
    printf("문자열을 입력하세요");
    scanf("%s", str, sizeof(str));
    printf("%s\n", str);
    
    return 0;
}