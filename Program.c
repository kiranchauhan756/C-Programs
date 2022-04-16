#include<stdio.h>

typedef struct Students{
    char fname[50];
    char lname[50];
    int roll_no;
} std;


void main(){
    FILE *data;
    int choice, status, key, to_del;
    
    int mainMenu();
    void enterRecord(FILE*);
    void displayRecords(FILE*);
    void deleteRecord(FILE*, int);
    int searchRecord(FILE*, int);
   
    data = fopen("./data.xyz", "a+");
    while (1){
        choice = mainMenu();
        switch (choice){
        case 1:
            enterRecord(data);
            break;
        case 2:
            printf("Enter the roll number of student: ");
            scanf("%d", &key);
            to_del = searchRecord(data, key);
            deleteRecord(data, to_del);
            break;
        case 3:
            printf("Enter the roll number of student: ");
            scanf("%d", &key);
            searchRecord(data, key);
            break;
        case 4:
            displayRecords(data);
            break;
        case 5:
            return;
        default:
            printf("Wrong choice please try again...\n");
        }
    }
    
}

int mainMenu(){
    int choice;
    printf("Enter Your Choice: \
                \n1. Enter New Record \
                \n2. Delete Record \
                \n3. Search for the Record \
                \n4. Display all the Records \
                \n5. Exit \
                \nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

void enterRecord(FILE *fp){
    std f;
    char tmp;
    printf("Enter Friend's first name: ");
    scanf("%s%c", f.fname, &tmp);
    printf("Enter Friend's last name: ");
    scanf("%s%c", f.lname, &tmp);
    printf("Enter Friend's roll number: ");
    scanf("%d", &f.roll_no);
    fseek(fp, 0, SEEK_END);
    fprintf(fp, "%s %s %d\n", f.fname, f.lname, f.roll_no);
}

void displayRecords(FILE *fp){
    std f;
    int status;
    fseek(fp, 0, SEEK_SET);
    
    printf("               RECORDS ARE              \n");
    printf("----------------------------------------\n");
    while(1){
        status = fscanf(fp, "%s %s %d\n", f.fname, f.lname, &f.roll_no);
        if(status == EOF) break;
        printf("%d - %s %s\n", f.roll_no, f.fname, f.lname);
    }
    printf("----------------------------------------\n");
}

int searchRecord(FILE *fp, int roll_no){
    std f;
    int status, found=0, row=1;
    fseek(fp, 0, SEEK_SET);
    
    printf("                RESULT(S)               \n");
    printf("----------------------------------------\n");
    while(1){
        status = fscanf(fp, "%s %s %d\n", f.fname, f.lname, &f.roll_no);
        if(status == EOF) break;
        if(f.roll_no == roll_no){
            printf("%d - %s %s\n", f.roll_no, f.fname, f.lname);
            found = 1;
        }
        if(!found) row++;
    }
    if(!found) printf("  No Results are found...\n");
    printf("----------------------------------------\n");
    return row;
}

void deleteRecord(FILE *fp, int row){
    char ch;
    long cur=0; 
    fseek(fp, 0, SEEK_SET);
    while((ch=fgetc(fp)) != EOF){
        if(row==1){
            fseek(fp, cur, SEEK_SET);
            fputc(' ', fp);
            if(ch=='\n') break;
        }
        if(ch=='\n'){
            row--;
        }
        cur++;
    }
}