#include <stdio.h>

enum action{
 ADD = 1,
 READ,
 EXIT,
};

struct person
{
 char surname[20];
 char name[20]; 
 char number[20];
};

int operation(enum action act){
 switch(act){
  case ADD:
   struct person new = {"new", "new", "new"};
   printf("Enter surname: ");
   scanf("%s", new.surname); 
   printf("Enter name: ");
   scanf("%s", new.name);     
   printf("Enter number: ");
   scanf("%s", new.number);
   printf("contact added\nselect the following action\n");
   int size = sizeof(struct person);
   FILE *fp = fopen("phonebook.txt", "a");
   size_t count = fwrite(&new, size, 1, fp);
   fclose(fp);
   break;
   
  case READ:
   struct person all[60];
   fp = fopen("phonebook.txt", "r");
   while(fread(&all, sizeof(struct person), 60, fp)){
    for (int i = 0; i < 60; i++){
     printf("Surname: %s \t Name: %s\t Number: %s\n", all[i].surname,all[i].name, all[i].number);
    }
   }
   fclose(fp);
   printf("end\nselect the following action\n");
   break;
   
  default:
   printf("Error! You need to enter:\n1 - Add a contact\n2 - Output all contacts\n3 - Finish\n");
   return 0;
 }
}

int main(){
 printf("Select an action\n1 - Add a contact\n2 - Output all contacts\n3 - Finish\n");
 enum action act;
 int ac;
 int exit = 0;
 while(exit != 1){
  scanf("%d", &ac);
  act = ac;
  if(act == EXIT){
   printf("the work session is completed\n");
   exit = 1;
   break;
  } 
  operation(act);
 }
 return 0;
}
