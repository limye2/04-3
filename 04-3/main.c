//
//  main.c
//  04-3
//
//  Created by MacBook Air on 2023/10/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    
    printf("input seconds : ");
    scanf("%i", &a);
    
    printf("%i seconds - %i:%i \n", a, a/60, a%60);
    return 0;
}
