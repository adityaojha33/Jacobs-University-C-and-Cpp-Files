/*
CH-230-A
a8_p7.c
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int main() {
  char c[100];  /* declaring char array */
  char d[100];
  FILE *file,*filep,*file2;  /* declaring FILE pointer  */
  /*opening two file in read and one file in write mode*/
  file = fopen("text1.txt", "r");
  file2 = fopen("text2.txt", "r");
  filep = fopen("merge12.txt","w+");
  int i;
   while(fgets(c, 100, file)!=NULL && fgets (d,100,file2)!=NULL) 
   {
        i=strlen(c);
        if(c[i-1]=='\n')
        {
             /*removing the gap caused by new line*/
             c[i-1]='\0';
        }
        /*printing the value in the third file */
        fprintf(filep,"%s%s",c,d);
    }
    printf("Text merged succesfull...\n");
    /*closing the opened files*/
    fclose(file);
    fclose(file2);
    fclose(filep);
    return 0;
  }