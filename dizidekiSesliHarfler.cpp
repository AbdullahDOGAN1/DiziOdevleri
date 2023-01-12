#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Lütfen bir karakter dizisi girin: ");
  scanf("%s", str);

  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
      printf("%c\n", str[i]);
    }
  }

  return 0;
}

