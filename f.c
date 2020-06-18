#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// function to calculate current age
void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year) {
   FILE *fptr;
   fptr = fopen("program.txt", "w");
   if (fptr == NULL) {
        printf("Error creating file");
        exit(1);
    }
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (birth_date > present_date) {
      present_date = present_date + month[birth_month - 1];
      present_month = present_month - 1;
   }
   if (birth_month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }
   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   int final_year = present_year - birth_year;
   printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
   fprintf(fptr, "Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
   fclose(fptr);
}
int main() {
   int i;
   char a[10],b[10];
   int c,d,t,y;
   int present_date = 0;
   int present_month = 0;
   int present_year = 0;
   int birth_date = 0;
   int birth_month = 0; 
   int birth_year = 0;
printf("enter current date as ddmmyyyy \n");
for(i=0;i<8;i++){
scanf("%c",&a[i]);}
i=0;
printf("enter birthday date as ddmmyyyy \n");
for(i=0;i<9;i++)
{
scanf("%c",&b[i]);
}
	c = (a[0]- '0');
	c = c*10;

	c = c + ((a[1]- '0'));
	d = (b[1]- '0');

	d = d*10;

	d = d + (b[2]- '0');

	present_date = c;
	birth_date = d;
	c = (a[2]- '0');
	c = c*10;
	c = c + (a[3]- '0');
	d = (b[3]- '0');
	d = d*10;
	d = d + (b[4]- '0');
	present_month = c;
	birth_month = d;
c= 0;
d=0;
for(i=0;i<4;i++)
{
	t = (a[i+4]- '0');

	c = (c*10)+t;

	y = (b[i+5]- '0');

	d = (d*10)+y;

}

	present_year = c;
	birth_year = d;

age(present_date, present_month, present_year, birth_date, birth_month, birth_year);
   return 0;
}
