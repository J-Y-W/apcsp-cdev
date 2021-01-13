#include <stdio.h>



// student structure
//struct Student...
struct Student {
	char firstName[256];
	char lastName[256];
	int age;
	int studentID;
};

void printStudent(struct Student* student)
{
  printf("First name: %s\n", student->firstName);
  printf("Last name: %s\n", student->lastName);
  printf("Age: %d\n", student->age);
  printf("StudentID: %d\n", student->studentID);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  for(int i = 0; i < num; i++)
  {
	printStudent(&students[i]);
  }
}


int main()
{

  // an array of students
  //xxx students;
  struct Student students[10];
  int numStudents = 0;
  char input[256];
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
      char input2[256];
      printf("Input First Name: ");
      fgets(input2, 256, stdin);
      sscanf(input2, "%s", students[numStudents].firstName);

      printf("Input Last Name: ");
      fgets(input2, 256, stdin);
      sscanf(input2, "%s", students[numStudents].lastName);

      printf("Input Age: ");
      while (1)
      {
         fgets(input2, 256, stdin);
         if (sscanf(input2, "%d", &students[numStudents].age) == 1) break;
         printf("Not a valid age - try again!\n");
      }
      printf("Input Student ID: ");

      while (1)
      {
         fgets(input2, 256, stdin);
	 if (sscanf(input2, "%d", &students[numStudents].studentID) == 1) break;
	 printf("Not a valid student ID - try again!\n");
      }
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
