#include<stdio.h>
void reversearray(int *p, int n) {
    int *first = p;
    int *last = p+n-1;
    int temp;
    while(first<last) {
        if(*first + *last <= *first * *last ) {
            int temp = *first;
            *first = *last;
            *last = temp;
        }
        first++;
        last--;
    }
    printf("Reversed array elements are: ");
    for(int i=0; i<n; i++)
        printf("%d ", *p++);
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    reversearray(a, n);
    return 0;
}



