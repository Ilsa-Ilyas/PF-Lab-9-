#include<stdio.h>
#include<string.h>
int main(void){
    char user[5][50] = {"ilsa", "sara", "izaan", "talha", "ali"}, input[50];
    int flag = 0;
    printf("Enter Name : ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    for(int i = 0; i < 5; i++) {
        if(strcmp(input, user[i]) == 0) {
            flag = 1;
            break;
        }
    }
    if(flag) {
        printf("\n Name Found");
    } else {
        printf("\n Name Not Found");
    }
    return 0;
}
