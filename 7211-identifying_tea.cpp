#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<iostream>
#include<cstdint>

using namespace std;

int main() {
    int T,c,compt;
    while (scanf("%d",&T)==1) {
        compt=0;
        for (int i=0; i<5 ; i++){
            scanf("%d", &c);
            if (T==c) {
                compt++;
            }
        }
    printf("%d\n",compt);
    }
    return 0;
}