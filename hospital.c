#include<stdio.h>

struct Patient{
    int id;
    char name[50];
};

struct Patient p[100];
int count=0;

int main(){

    int choice;

    while(1){

        printf("\n--- Hospital Management ---\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Exit\n");

        scanf("%d",&choice);

        if(choice==1){

            printf("Enter ID: ");
            scanf("%d",&p[count].id);

            printf("Enter Name: ");
            scanf("%s",p[count].name);

            count++;

        }else if(choice==2){

            for(int i=0;i<count;i++){
                printf("\nID: %d",p[i].id);
                printf("\nName: %s\n",p[i].name);
            }

        }else{
            break;
        }
    }
}
