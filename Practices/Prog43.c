#include<stdio.h>

int funNpR(int n, int r){
    int res=1;

    for(int i=0;i<r;i++){
        res=res*(n-i);
    }
    return res;
}

int main(){
    int p, s;
    printf("No of people: ");
    scanf("%d", &p);
    printf("No of seats: ");
    scanf("%d", &s);

    if (s > p) {
        printf("Number of seats cannot exceed number of people.\n");
        return 1;
    }
    
    printf("Permutation: %d", funNpR(p, s));
    return 0;
}