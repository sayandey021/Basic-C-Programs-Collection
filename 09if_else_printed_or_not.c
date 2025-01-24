#include <stdio.h>

int main() {
    if(1) {
        printf("I am executed, I am 1.\n");
    }
        if(-1) {
        printf("I am executed, I am -1.\n");
    }
    if(1231654) {
        printf("I am executed, I am 1231654.\n");
    }
    if(0.623) {
        printf("I am executed, I am 0.623.\n");
    }
    if('a') {
        printf("I am executed, I am 'a'.\n");
    }
    if(0) {
        printf("I am 0 I'm not gonna get printed");
    }
    return 0;
}