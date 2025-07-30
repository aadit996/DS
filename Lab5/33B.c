#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void main()
{
  int n;
  printf("Enter numbe of strings to be enterd : ");
  scanf("%d", &n); // size of array
  char arr[n][50];

  for (int i = 0; i < n; i++)
  { // enter string
    printf("Enter string %d : ", i + 1);
    scanf("%s", &arr[i]);
  }

  int random = rand() % n; // get random string
  // printf("%s",arr[random]);
  char temp[50];

  int count = 0;
  while (arr[random][count] != '\0')
  { // store random string into temp
    temp[count] = arr[random][count];
    count++;
  }
  temp[count] = '\0';
  // printf("%s",temp);

  for (int i = 0; i < count; i++)
  { // sort that random string
    for (int j = i + 1; j < count; j++)
    {
      if (temp[i] > temp[j])
      {
        int x = temp[i];
        temp[i] = temp[j];
        temp[j] = x;
      }
    }
  }

  char anagram[50];
  printf("Enter the anagream of the string %s : ", arr[random]);
  scanf("%s", &anagram);

  for (int i = 0; i < count; i++)
  { // sort that user entered string
    for (int j = i + 1; j < count; j++)
    {
      if (anagram[i] > anagram[j])
      {
        int x = anagram[i];
        anagram[i] = anagram[j];
        anagram[j] = x;
      }
    }
  }

  if (strlen(anagram) == strlen(temp))
  {
    if (!(strcmp(anagram, temp)))
    {
      printf("the word you enterd is the corect anagram of %s", temp);
    }
    else
    {
      printf("No it is not the anagram of the word %s", temp);
    }
  }
  else
  {
    printf("As length is not same they cannot be anagram");
  }
}