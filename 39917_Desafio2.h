//
// Created by Robson Tavares Júnior on 24/10/18.
//

#ifndef ALGORITMIA_DESAFIO2_39917_DESAFIO2_H
#define ALGORITMIA_DESAFIO2_39917_DESAFIO2_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//----------------------------------
//********** Challenge #1 **********
//----------------------------------

int v1(){

    char name1[80], name2[80];
    int age1, age2;

    //collecting user input for the first brother name and age
    printf("Whats the first brother's name ?");
    scanf("%s", &name1);

    printf("\nWhats the first brother's age ?");
    scanf("%d", &age1);

    //collecting user input for the first brother name and age
    printf("\nWhats the second brother's name ?");
    scanf("%s", &name2);

    printf("\nWhats the second brother's age ?");
    scanf("%d", &age2);

    //applying logics
    if(age1 > age2){
        printf("%s, %d years old, is older than %s, %d years old. \n\n", name1, age1, name2, age2);
    } else if(age2 > age1){
        printf("%s, %d years old, is older than %s, %d years old.", name2, age2, name1, age1);
    } else{
        printf("%s and %s are twins. Both are  years old", name1, name2);
    }

    return 0;

}

//----------------------------------
//********** Challenge #2 **********
//----------------------------------

int v2 ()

{
    int age, biggestAge = 0;
    char name[900], biggestAgeName[900];

    // we need to initialize this char in order for the while-loop work properly
    printf("Enter the first person name ");
    scanf("%s", &name);

    age = -1;

    while(strcmp(name, "fim") != 0) {

        //looping the first cycle
        if(age<=0){
            do{

                printf("Enter the first person age ");
                scanf("%d", &age);
                //Assign biggest age and name in case the first person inputted be the eldest.
                strcpy(biggestAgeName, name);
                biggestAge = age;

            }while(age<=0);
        }

        //entering the second+ person
        printf("Enter the next person name ");
        scanf("%s", &name);

        //Checking if person to be inputted is wanted (i.e. input <> "fim")
        if(strcmp(name, "fim") !=0) {

            printf("Enter the next person age ");
            scanf("%d", &age);

            //checking if the current age inputted is the biggest
            if (age > biggestAge) {

                biggestAge = age;
                strcpy(biggestAgeName, name);
            }
        } else{

            break;

        }

    }

    //printing the results after the user has ended the inputting cycle
    printf("The eldest person is: %s with %d years. ", biggestAgeName, biggestAge);


}

int v3 ()

{
    int weight, biggestWeight = 0;
    char name[900], biggestWeightName[900];

    // we need to initialize this char in order for the while-loop work properly
    printf("Enter the first person name ");
    scanf("%s", &name);

    weight = -1;

    while(strcmp(name, "fim") != 0) {

        //looping the first cycle
        if(weight<=0){
            do{

                printf("Enter the first person weight ");
                scanf("%d", &weight);
                //Assign biggest age and name in case the first person inputted be the fattest.
                strcpy(biggestWeightName, name);
                biggestWeight = weight;

            }while(weight<=0);
        }

        //entering the second+ person
        printf("Enter the next person name ");
        scanf("%s", &name);

        //Checking if person to be inputted is wanted (i.e. input <> "fim")
        if(strcmp(name, "fim") !=0) {

            printf("Enter the next person weight ");
            scanf("%d", &weight);

            //checking if the current weight inputted is the biggest
            if (weight > biggestWeight) {

                biggestWeight = weight;
                strcpy(biggestWeightName, name);
            }
        } else{

            break;

        }

    }

    //printing the results after the user has ended the inputting cycle
    printf("The fattest person is: %s with %d kg. ", biggestWeightName, biggestWeight);


}

int v4(){

    int weight, biggestWeight = 0;
    float height, imc, biggestIMC = 0, biggestHeight = 0;
    char name[900], biggestIMCName[900];

    // we need to initialize this char in order for the while-loop work properly
    printf("Enter the first person name ");
    scanf("%s", &name);

    weight = -1;

    while(strcmp(name, "fim") != 0) {

        //looping the first cycle
        if(weight<=0){

            do{

                printf("Enter the first person weight ");
                scanf("%d", &weight);

                printf("Enter the first person height ");
                scanf("%f", &height);

                //Assign biggest weight and name in case the first person inputted be the fattest.
                strcpy(biggestIMCName, name);

                //calculatin the "imc"
                imc = weight/pow(height,2);
                biggestIMC = imc;

                printf("%s has IMC %f \n", name, imc);

            }while(weight<=0);
        }


        //entering the second+ person
        printf("Enter the next person name ");
        scanf("%s", &name);

        //Checking if person to be inputted is wanted (i.e. input <> "fim")
        if(strcmp(name, "fim") !=0) {

            printf("Enter the next person weight ");
            scanf("%d", &weight);

            printf("Enter the next person height ");
            scanf("%f", &height);

            //calculatin the "imc
            imc = weight/pow(height, 2);

            printf("%s has IMC %f \n",name, imc);

            //checking if the current age inputted is the biggest
            if (imc > biggestIMC) {

                biggestIMC = imc;
                strcpy(biggestIMCName, name);
            }
        } else{

            break;

        }

    }

    //printing the results after the user has ended the inputting cycle
    printf("The person with the highest IMC is: %s with IMC = %f . ", biggestIMCName, biggestIMC);

}


int v5(){

    int weight, biggestWeight = 0;
    float height, imc, biggestIMC = 0, lowestIMC = 0;
    char name[900], biggestIMCName[900], lowestIMCName[900];

    // we need to initialize this char in order for the while-loop work properly
    printf("Enter the first person name ");
    scanf("%s", &name);

    weight = -1;

    while(strcmp(name, "fim") != 0) {

        //looping the first cycle
        if(weight<=0){

            do{

                printf("Enter the first person weight ");
                scanf("%d", &weight);

                printf("Enter the first person height ");
                scanf("%f", &height);

                //Assign biggest weight and name in case the first person inputted be the fattest.
                strcpy(biggestIMCName, name);

                //calculatin the "imc"
                imc = weight/pow(height,2);
                biggestIMC = imc;
                lowestIMC = imc;

                printf("%s has IMC %f \n", name, imc);

            }while(weight<=0);
        }


        //entering the second+ person
        printf("Enter the next person name ");
        scanf("%s", &name);

        //Checking if person to be inputted is wanted (i.e. input <> "fim")
        if(strcmp(name, "fim") !=0) {

            printf("Enter the next person weight ");
            scanf("%d", &weight);

            printf("Enter the next person height ");
            scanf("%f", &height);

            //calculatin the "imc
            imc = weight/pow(height, 2);

            printf("%s has IMC %f \n",name, imc);

            //checking if the current imc inputted is the biggest
            if (imc > biggestIMC) {

                biggestIMC = imc;
                strcpy(biggestIMCName, name);
            }
            //checking if the current imc inputted is the lowest
            else if(imc < lowestIMC){

                lowestIMC = imc;
                strcpy(lowestIMCName, name);

            }
        } else{

            break;

        }

    }

    //printing the results after the user has ended the inputting cycle
    printf("The person with the highest IMC is: %s with IMC = %f \n ", biggestIMCName, biggestIMC);
    printf("The person with the lowest IMC is: %s with IMC = %f . ", lowestIMCName, lowestIMC);

}

int v6(){

    int weight, biggestWeight = 0;
    float height, imc, biggestIMC = 0, lowestIMC = 0;
    char name[900], biggestIMCName[900], lowestIMCName[900];

    // we need to initialize this char in order for the while-loop work properly
    printf("Enter the first person name ");
    scanf("%s", &name);

    weight = -1;

    while(strcmp(name, "fim") != 0) {

        //looping the first cycle
        if(weight<=0){

            do{

                printf("Enter the first person weight ");
                scanf("%d", &weight);

                printf("Enter the first person height ");
                scanf("%f", &height);

                //Assign biggest weight and name in case the first person inputted be the fattest.
                strcpy(biggestIMCName, name);

                //calculatin the "imc"
                imc = weight/pow(height,2);
                biggestIMC = imc;
                lowestIMC = imc;

                //printing accordingly IMC's table.
                if(imc < 19.1){
                    printf("%s has IMC %f which is below ideal weight\n", name, imc);
                } else if(imc >= 19.1 && imc < 25.8){
                    printf("%s has IMC %f which is ideal weight \n", name, imc);
                }else if(imc >= 25.8 && imc < 27.3){
                    printf("%s has IMC %f which is marginally above ideal weight \n", name, imc);
                }else if(imc >= 27.3 && imc < 32.3){
                    printf("%s has IMC %f which is above ideal weight \n", name, imc);
                }else{
                    printf("%s has IMC %f which is obese \n", name, imc);
                }

            }while(weight<=0);
        }


        //entering the second+ person
        printf("Enter the next person name ");
        scanf("%s", &name);

        //Checking if person to be inputted is wanted (i.e. input <> "fim")
        if(strcmp(name, "fim") !=0) {

            printf("Enter the next person weight ");
            scanf("%d", &weight);

            printf("Enter the next person height ");
            scanf("%f", &height);

            //calculatin the "imc
            imc = weight/pow(height, 2);

            //Printing accordingly IMC's table.
            if(imc < 19.1){
                printf("%s has IMC %f which is below ideal weight\n", name, imc);
            } else if(imc >= 19.1 && imc < 25.8){
                printf("%s has IMC %f which is ideal weight \n", name, imc);
            }else if(imc >= 25.8 && imc < 27.3){
                printf("%s has IMC %f which is marginally above ideal weight \n", name, imc);
            }else if(imc >= 27.3 && imc < 32.3){
                printf("%s has IMC %f which is above ideal weight \n", name, imc);
            }else{
                printf("%s has IMC %f which is obese \n", name, imc);
            }

            //checking if the current imc inputted is the biggest
            if (imc > biggestIMC) {

                biggestIMC = imc;
                strcpy(biggestIMCName, name);
            }
                //checking if the current imc inputted is the lowest
            else if(imc < lowestIMC){

                lowestIMC = imc;
                strcpy(lowestIMCName, name);

            }
        } else{

            break;

        }

    }

    //printing the results after the user has ended the inputting cycle
    printf("The person with the highest IMC is: %s with IMC = %f \n", biggestIMCName, biggestIMC);
    printf("The person with the lowest IMC is: %s with IMC = %f . ", lowestIMCName, lowestIMC);

}

int v7(){

    int weight,  biggestWeight = 0;
    float counterw1=0, counterw2=0, counterw3=0, counterw4=0, counterw5=0, counter=1;
    float height, imc, biggestIMC = 0, lowestIMC = 0;
    char name[900], biggestIMCName[900], lowestIMCName[900];

    // we need to initialize this char in order for the while-loop work properly
    printf("Enter the first person name ");
    scanf("%s", &name);

    weight = -1;

    while(strcmp(name, "fim") != 0) {

        //looping the first cycle
        if(weight<=0){

            do{

                printf("Enter the first person weight ");
                scanf("%d", &weight);

                printf("Enter the first person height ");
                scanf("%f", &height);

                //Assign biggest weight and name in case the first person inputted be the fattest.
                strcpy(biggestIMCName, name);

                //calculatin the "imc"
                imc = weight/pow(height,2);
                biggestIMC = imc;
                lowestIMC = imc;

                //printing and counting accordingly IMC's table.
                if(imc < 19.1){

                    printf("%s has IMC %f which is below ideal weight\n", name, imc);
                    counterw1 += 1;

                } else if(imc >= 19.1 && imc < 25.8){
                    printf("%s has IMC %f which is ideal weight \n", name, imc);
                    counterw2 += 1;

                }else if(imc >= 25.8 && imc < 27.3){
                    printf("%s has IMC %f which is marginally above ideal weight \n", name, imc);
                    counterw3 += 1;

                }else if(imc >= 27.3 && imc < 32.3){
                    printf("%s has IMC %f which is above ideal weight \n", name, imc);
                    counterw4 += 1;
                }else{
                    printf("%s has IMC %f which is obese \n", name, imc);
                    counterw5 += 1;
                }

            }while(weight<=0);
        }


        //entering the second+ person
        printf("Enter the next person name ");
        scanf("%s", &name);

        //Checking if person to be inputted is wanted (i.e. input <> "fim")
        if(strcmp(name, "fim") !=0) {

            printf("Enter the next person weight ");
            scanf("%d", &weight);

            printf("Enter the next person height ");
            scanf("%f", &height);

            //calculatin the "imc
            imc = weight/pow(height, 2);

            //printing and counting accordingly IMC's table.
            if(imc < 19.1){

                printf("%s has IMC %f which is below ideal weight\n", name, imc);
                counterw1 += 1;

            } else if(imc >= 19.1 && imc < 25.8){
                printf("%s has IMC %f which is ideal weight \n", name, imc);
                counterw2 += 1;

            }else if(imc >= 25.8 && imc < 27.3){
                printf("%s has IMC %f which is marginally above ideal weight \n", name, imc);
                counterw3 += 1;

            }else if(imc >= 27.3 && imc < 32.3){
                printf("%s has IMC %f which is above ideal weight \n", name, imc);
                counterw4 += 1;
            }else{
                printf("%s has IMC %f which is obese \n", name, imc);
                counterw5 += 1;
            }

            //checking if the current imc inputted is the biggest
            if (imc > biggestIMC) {

                biggestIMC = imc;
                strcpy(biggestIMCName, name);
            }
                //checking if the current imc inputted is the lowest
            else if(imc < lowestIMC){

                lowestIMC = imc;
                strcpy(lowestIMCName, name);

            }

            //keeping count of the number of people inputted
            counter += 1;
        } else{

            break;

        }

    }

    //printing the results after the user has ended the inputting cycle
    printf("The person with the highest IMC is: %s with IMC = %f \n", biggestIMCName, biggestIMC);
    printf("The person with the lowest IMC is: %s with IMC = %f \n", lowestIMCName, lowestIMC);

    printf("There are %.2f %c people with below ideal weight\n", (counterw1/counter)*100, 37);
    printf("There are %.2f %c people with ideal weight\n", (counterw2/counter)*100, 37);
    printf("There are %.2f %c people with marginally above ideal weight\n", (counterw3/counter)*100, 37);
    printf("There are %.2f %c people with above ideal weight\n", (counterw4/counter)*100, 37);
    printf("There are %.2f %c people with obesity\n", (counterw5/counter)*100, 37);


}
#endif //ALGORITMIA_DESAFIO2_39917_DESAFIO2_H
