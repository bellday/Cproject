#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int upanddown() {
	int rand_num =0; //랜덤값저장
	int input;
    int chance=10;

	srand((unsigned int)time(NULL));
	rand_num= rand() % 100+1;   //0~100

	while (1) {
        if(chance==0){
            printf("실패\n");
            break;
        }
		printf("숫자를 입력하세요(0~100)\n남은 기회 %d회\n", chance);
		scanf("%d", &input);
        
		if (input < 0 || input > 100) {
			printf("범위에 벗어난 숫자 입니다\n");
			//continue;
        }
		else if (input == rand_num) {
			printf("정답입니다.\n");
			break;
		}
		else if (input > rand_num) {
			printf("DOWN\n");
             chance--;
		}
		else if (input < rand_num && input > 0 && input < 100){
			printf("UP\n");
             chance--;     
        }
        else
        {printf("숫자가 아닙니다");}
    }

}