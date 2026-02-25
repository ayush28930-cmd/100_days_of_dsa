#include <stdio.h>

int main() {
    int n, key;
    
    
    scanf("%d", &n);
    
    int arr[n];
    
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    scanf("%d", &key);
    
    int comparisons = 0;
    int found = -1;
    
    
    for (int i = 0; i < n; i++) {
        comparisons++;              
        
        if (arr[i] == key) {
            found = i;              
            break;
        }
    }
    
    
    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not Found\n");
        
    printf("Comparisons = %d", comparisons);
    
    return 0;
}