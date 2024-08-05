# include<stdio.h>
int main() { 
    int n;
    printf("Enter the No. Lines:");
    scanf("%d", &n);

    for(int i = 1; i<=2*n; i++) 
    { for (int k = 1; k<=2*n; k++) {if(i <= n && k <=i) {printf("*");}
    else if ( i>n && i<=2*n && k<= 2*n+1-i) {printf("*");}
    else if ( i<=n && k>= 2*n+1-i && k<= 2*n) {printf("*");}
    else if ( i>n && i<=2*n && k>= i && k<= 2*n) {printf("*");} 
    else{printf(" ");} }
    printf("\n");}


    return 0;
}