#include <stdio.h>
#include <string.h>

typedef struct {
    int stu_id;
    char name[100]; 
    float mid_mark, final_mark, total;
} Student;

Student courseroster[150];
int rostersize = 0;

void promptStudentDetails(Student *studentptr)
{
    int i, b;
    
    if (rostersize >= 150)
    {
        printf("Full\n");
        return;
    }
    
    printf("Student Details:\n");
    printf("Enter student id:\n");
    scanf("%d", &b);

  
    for (i = 0; i < rostersize; i++) 
    {
        if (courseroster[i].stu_id == b) 
        {
            printf("Error! ID already exists.\n");
            return;
        }
    }

    
    studentptr->stu_id = b;

    printf("Enter name:\n");
    while (getchar() != '\n')
    {

    } 
    fgets(studentptr->name, sizeof(studentptr->name), stdin);
    

    printf("Enter mid marks:\n");
    scanf("%f", &studentptr->mid_mark);

    printf("Enter final marks:\n");
    scanf("%f", &studentptr->final_mark);

    studentptr->total = studentptr->mid_mark + studentptr->final_mark;
    rostersize++;
}

void displayStudent(const Student *studentptr)
{
    printf("Name: %s\n", studentptr->name);
    printf("ID: %d\n", studentptr->stu_id);
    printf("Mid marks: %.2f\n", studentptr->mid_mark);
    printf("Final marks: %.2f\n", studentptr->final_mark);
    printf("Total marks: %.2f\n", studentptr->total);
    
}

int findStudentIndexByID(const Student roster[], int size, int searchID)
{
    int i;
    for (i = 0; i < size; i++) 
    { 
        if (roster[i].stu_id == searchID) 
        {
            printf("Name: %s\n", roster[i].name);
            printf("Mid marks: %.2f\n", roster[i].mid_mark);
            printf("Final marks: %.2f\n", roster[i].final_mark);
            printf("Total marks: %.2f\n", roster[i].total);
            return i;
        }
    }

    printf("Not found\n");
    return -1;
}

int findTopStudentIndex(const Student roster[], int size)
{
    int i;
    if (size <= 0) 
    {
        printf("Roster is empty.\n");
        return -1;
    }

    float max = roster[0].total;
    int index = 0; 
    for (i = 1; i < size; i++) 
    {
        if (max < roster[i].total) 
        {
            max = roster[i].total;
            index = i;
        }
    }

    printf("Top Student Name: %s\n", roster[index].name);
    printf("Highest Mark: %.2f\n", max);
    return index; 
}

int main()
{
    char ch;
    int i, a, j;

    for(j=0;  ;j++) 
    {
        printf("Press A to add student details, B to display students, C to find student, D to find the top student, E to exit:\n");
        scanf(" %c", &ch);

        if (ch == 'A') 
        {
            promptStudentDetails(&courseroster[rostersize]);
        }
        else if (ch == 'B') 
        {
            if (rostersize == 0) 
            {
                printf("Roster is empty.\n");
            }
            for (i = 0; i < rostersize; i++) 
            {
                displayStudent(&courseroster[i]);
            }
        }
        else if (ch == 'C') 
        {
            printf("ID?\n");
            scanf("%d", &a);
           
            findStudentIndexByID(courseroster, rostersize, a);
        }
        else if (ch == 'D') 
        {
        
            findTopStudentIndex(courseroster, rostersize);
        }
        else if (ch == 'E') 
        {
            break;
        }
        else 
        {
            printf("Error!\n");
        }
    }

    return 0;
}
