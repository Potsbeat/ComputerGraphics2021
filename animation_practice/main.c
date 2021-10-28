#include <stdlib.h>
#include <stdio.h>

struct Vertex{
    float x,y,z;
};

void setVal(struct Vertex * vert, float x, float y, float z);
// int * getVal(struct Vertex * vert); 

int main(int argc, char *argv[]){

    // Check if a file was specified
    if(argc<2){
        printf("You must specify a file.\n");
        return 0;
    }
    
    FILE *file;
    file = fopen(argv[1],"r");  // Try to open the file

    // Check if the file exists.
    if(file==NULL){
        printf("File doesn't exist.\n");
        return 0;
    }

    char txt_line[200];

    // Read line by line
    while(fgets(txt_line, sizeof(txt_line), file)){
        printf("%s", txt_line);
    }
/*
    struct Vertex *v;
    int n,i;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    // allocating memory for n numbers of struct Vertex
    v = (struct Vertex*) malloc(n * sizeof(struct Vertex));
    for(i=0;i<n;i++)
        setVal((v+i), 2.0*i, 5.0+i, 3.0-i);
    for(i=0;i<n;i++)
        printf("Yeih: %0.3f, %0.3f, %0.3f\n", (v+i)->x, (v+i)->y, (v+i)->z);
    */
    fclose(file);
    return 0;
}

void setVal(struct Vertex * vert, float x, float y, float z){
    vert->x = x;
    vert->y = y;
    vert->z = z;
}

/* int * getVal(struct Vertex * vert){
    return vert->coord;
} */

/*
struct person {
   int age;
   float weight;
   char name[30];
};

int main()
{
   struct person *ptr;
   int i, n;

   printf("Enter the number of persons: ");
   scanf("%d", &n);

   // allocating memory for n numbers of struct person
   ptr = (struct person*) malloc(n * sizeof(struct person));

   for(i = 0; i < n; ++i)
   {
       printf("Enter first name and age respectively: ");

       // To access members of 1st struct person,
       // ptr->name and ptr->age is used

       // To access members of 2nd struct person,
       // (ptr+1)->name and (ptr+1)->age is used
       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }

   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);

   return 0;
}
*/