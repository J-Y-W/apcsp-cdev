#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaOfCircle(float radius)
{
  float area = M_PI*radius*radius;
  return area;
}

int main(int argc, char* argv[]) 
{

  // the two variables which control the number of times areaOfCircle is called
  char input[256];
  float start;
  int reps;
  if (argc == 2 && sscanf()
  {
	start = *argv[1];
	reps = *argv[2];
	for (float i = start; i < start+reps; i++)
	{
	   float area = areaOfCircle(i);
	   printf("area of a circle with %f as its radius is equal to %f\n", i, area);
	}
	exit(0);
  }
  else {

	  printf("Input Starting Value:\n");
	  while (1)
	  {
		fgets(input, 256, stdin);
		if(sscanf(input, "%f", &start) == 1) break;
		printf("Not a valid starting number - try again!\n");
	  }

	  printf("Input Number of Reps:\n");
	  while (1)
	  {
		fgets(input, 256, stdin);
		if(sscanf(input, "%d", &reps) == 1) break;
		printf("Not a number of reps - try again!\n");
	  }
	  // for testing only - do not change
	  getTestInput(argc, argv, &start, &reps);

	  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
	  
	  // add your code below to call areaOfCircle function with values between
	  // start and end
	  for (float i = start; i < start+reps; i++)
	  {
	     float area = areaOfCircle(i);
	     printf("area of a circle with %f as its radius is equal to %f\n", i, area);
	  }

  }

}
