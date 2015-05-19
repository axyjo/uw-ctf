#include <stdio.h>

int main() {
  int bytesRead;
  int passwordBytes = 11;
  char *password;
  char knownPassword[11] = "Bbf6BXEbz8";
  char ctfkey[11] = "31Afv4Ag*&";
  int cmp;

  puts("Please enter the password: ");
  scanf("%s", password);

  cmp = compare(knownPassword, password);
  if (cmp) {
    puts("The key is: ");
    puts(ctfkey);
  } else {
    puts("Invalid password.");
  }
  return 0;
}

int compare(char s1[], char s2[]) {
  int i = 0, flag = 0;
  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] != s2[i]) {
      flag = 1;
      break;
    }
    i++;
  }

  if (flag == 0 && s1[i] == '\0' && s2[i] == '\0') {
    return 1;
  }

  return 0;
}
