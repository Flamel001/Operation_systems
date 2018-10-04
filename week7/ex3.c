//
// Created by root on 10/4/18.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    //Allows you to generate random number
    srand(time(NULL));

    // Allows user to specify the original array size, stored in variable n1.
    printf("Enter original array size:");
    int n1=0;
    scanf("%d",&n1);//LOL WHY AM I

    //Create a new array of n1 ints
    int* a1 = malloc(sizeof(int)*n1);/* Fill in*/
    int i;//WHY
    for(i=0; i<n1; i++){
        //Set each value in a1 to 100
        a1[i]=100;//DOING THE SAME

        //Print each element out (to make sure things look right)
        printf("%d ",a1[i]);//AS IN PREVIOUS EX
    }

    //User specifies the new array size, stored in variable n2.
    printf("\nEnter new array size: ");
    int n2=0;
    scanf("%d",&n2);

    //Dynamically change the array to size n2
    a1 = realloc(a1,n2);

    //If the new array is a larger size, set all new members to 0. Reason: dont want to use uninitialized variables.

    if (n2>n1){
        for (int j = n2-1; j >= n1; j--) {
            a1[j]=0;
        }
    }


    for(i=0; i<n2;i++){
        //Print each element out (to make sure things look right)
        printf("%d ",a1[i]);



        //BTW THIS TASK IS COOL, BUT EZ, I HOPE WE'LL SEE TASKS LIKE THIS IN FUTURE BECAUSE IT'S

        //UNDERSTANDABLE, INTERESTING AND TEACHING AT THE SAME TIME(ex4.c is much worse for example)



    }
    printf("\n");

    //Done with array now, done with program :D
    // U GODDAMN RIGHT

    return 0;
}

