
#include <stdio.h>
#include <unistd.h>
#include <function.h>
#include <math.h>
#include <string.h>


//structure
struct Records{
    int no;
    char name[100];
    char company[100];
    char phone[50];
    char email[255];
    struct Records *next;
};

//functions
void fshowall( struct Records *head ){
    printf("No.\tName\tCompany\tPhone\tE-mail");
    struct Records *temp=head;
    while( temp!= NULL){
        printf("\n%d\t%s\t%s\t%s\t%s", temp->no, temp->name, temp->company, temp->phone, temp->email);
        temp=temp->next;
}

void fadd( struct Records *head){
    
    printf("Please input the Name: \n");
    fscanf("%s", name);
}

void fmodify( struct Records *head){
    
}

void fdelete( struct Records *head ){
    
}

void fsearch( struct Records *head ){
    
}

//quit the program
void fquit( ){

    
}


int main (){
    //condition
    struct Records * head = nullptr;
    int i, conc_counter=0;
    
    // OPEN FILE
    FILE *fptr, *fw;
    fptr = fopen("conctactlist.txt", "r");
    fw = fopen("contactlist.txt", "w");
    
    
    // CLOSE FILE
    for(;;){
        printf(">Welcome to Coffee Contacts!\n");
        printf("\n");
        char input;
        printf(">Please input: \n");
        printf("(Note: please input single alphabet)\n ");
        printf("\n");
        printf(" -> i -- show all contacts\n -> a -- add a new contact\n -> m -- modify a contact\n -> d -- delete a contact\n -> s -- search a contact by name\n -> q -- quit the program\n ");
        scanf("%c", &input);
        switch( input ){
        case 'i':
          fshowall( *head);
          break;
    
        case 'a':
          fadd( *head);
          break;
    
        case 'm':
          // statements
          fmodify(*head);
          break;
    
        case 'd':
          // statements
          fdelete( *head);
          break;
    
        case 's':
          // statements
          fsearch(*head);
          break;
    
        case 'q':
          fquit();
          printf("Program Quitted!")
          break;
        
        }
    
        fopen()
        fclose()
}
}

