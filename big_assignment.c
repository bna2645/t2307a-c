#include <stdio.h>
#include <string.h>

struct Student {
	int id;
    char name[50];
    float mark;
    char email[50];
};

struct Student students[10];
int index = 0;

void printStudent(struct Student stu) // <------ 1 item
{
	printf("\n---- Student information -----");
	printf("\n%d %s %s %f", stu.id, stu.name, stu.email, stu.mark);
}

void inputStudent(int index)
{
	//automatic set id
	students[index].id = index + 1;
	
	fflush(stdin); //Standard input output
	printf("Enter student name: ");
    gets(students[index].name); //students[0]
    
    fflush(stdin);
    printf("Enter student email: ");
    gets(students[index].email);
    
    printf("Enter student mark: ");
    scanf("%f", &students[index].mark);
     
    printStudent( students[index] ); //item[0]
}

void printAll()
{
	int i = 0;
	for(i = 0; i < index; i++)
	{
		printStudent(students[i]);
	}
}

void findById()
{
	int findId = 0;
	int i = 0;
	int check = 0; 
	
	printf("Enter id: ");
	scanf("%d", &findId);
	
	for(i = 0; i < index; i++)
	{
		if(students[i].id == findId )
		{
			printf("FOUND");
			check = 1;
			printStudent(students[i]);
		} 
	}
	
	if(check == 0)
	{
		printf("Not found");
	}
}

void sortByMark() {
    if (index == 0) {
        printf("No students to sort.\n");
        return;
    }

    int i, j;
    struct Student temp;

    for (i = 0; i < index - 1; i++) {
        for (j = i + 1; j < index; j++) {
            if (students[i].mark < students[j].mark) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("Students sorted by mark:\n");
    printAll();
}

int main()
{
	int choice  = 0;
	
	do {
        printf("\nMenu:\n");
        printf("1. Add new student\n");
        printf("2. Display all students\n");
        printf("3. Find student by id\n");
        printf("4. Sort students by mark\n");
        printf("5. Edit student information\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
        	case 1:
        		inputStudent( index );
        		index++;
        		break;
        	case 2:
        		printAll();
        		break;
        	case 3:
        		findById();
        		break;
        	case 4:
        		sortByMark();
        		break;
        	case 5:
        		//editStudent();
        		break;
        	case 6:
        		printf("exited");
        		return 0;
        		break;
        	default:
				printf("Invalid menu, try again!!!");
				break;
		}
        
    } while(1);

                
	return 0;
}