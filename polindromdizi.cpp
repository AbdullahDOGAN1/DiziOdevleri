#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  
    int length;     
    int i;          
    int palindrome = 1;  

    printf("Lutfen bir karakter dizisi girin: ");
    scanf("%s", str);

    length = strlen(str);  
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Girilen dizi polindromdur.\n");
    } else {
        printf("Girilen dizi polindrom degildir.\n");
    }
    return 0;
}

