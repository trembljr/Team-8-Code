//program starts here
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaring variables for user input
	char userTrueFalse;
	char userMultChoice;
	char userBlank[50];
	char newQuiz = 'A';

    while(toupper(newQuiz) != 'N'){
        //Declares and reassigns variables used each loop
        double score = 0;
    	double scoreAvg = 0;
    	double numScores = 0;
    	newQuiz = 'A';
        //Makes sure the number for the random generation is valid
    	int luckyNum = 0;
    	while(luckyNum < 1 || luckyNum > 9) {
    		printf("Please enter a number between 1 and 9.\n");
    		scanf(" %d", &luckyNum);
    	}
    	
    	srand(luckyNum * 10);
    	int quizNum = (rand() % 3) + 1;
    	printf("You are taking quiz number %d.\n", quizNum);
        
        if (quizNum == 1){
            while(score != 3){
    	
    		printf("True or false: This is an infinite loop\nwhile(1){\n   printf(\"1\");\n}\n");
    		printf("A. True\nB. False\n"); //correct answer: A
    		scanf(" %c", &userTrueFalse);
    		if(toupper(userTrueFalse) == 'A'){
    			printf("correct answer\n");
    			score += 1;
    		}
    		else{
    			printf("wrong answer\n");
    		}
    		printf("What size array will the compiler create for the following string?:\n   char str[] = “midterm”\n");
    		printf("A. 6\nB. 7\nC. 30\nD. does not compile\n");
    		scanf(" %c", &userMultChoice);
    		if(toupper(userMultChoice) == 'B'){
    			printf("correct answer\n");
    			score += 1;
    		}
    		else 
    			printf("wrong answer\n");
    		printf("Fill in the blank: what will the following code output on the final iteration?\nfor(int i = 1; i <= 10; i += 2){\n   printf(“%%d“, i+1);\n}\n");
    		scanf(" %s", &userBlank);
    		if (strcmp(userBlank, "10") == 0){
    			printf("correct answer\n");
    			score += 1;
    		}
    		else 
    			printf("wrong answer\n");
    		if(score == 3)
    			printf("congratulations! You passed!\n");
    		else
    			printf("you failed, retake the quiz\n");
    	
            scoreAvg += score;
    	    numScores++;    
        }
    }
    
    	if(quizNum == 2){
    	   while(score != 3){
            
        	//question 1 of quiz 2
    		printf("True or False: Only character or integer can be used in switch statement?\n");
    		printf("A: True\nB:False\n");
    		scanf(" %c" , &userTrueFalse);
    		if(toupper(userTrueFalse) == 'A'){
    		    printf("correct answer\n");
    		    score++;
    		}else{
    			printf("wrong answer\n");
    		}
    		//question 2 of quiz 2
    		printf("To print a double value which format specifier can be used?\n");
    		printf("A: %%l \nB:%%lf \nC:%%d \nD: none of the above\n");
    		scanf(" %c" , &userMultChoice);
    	    if(toupper(userMultChoice) == 'B'){
    	        printf("correct answer\n");
    	        score++; 
    	    }else {
    		    printf("wrong answer\n");
            }
        	// question 3 of quiz 2
        	printf("fill in the blank:  Compiler generates ___ file.(answer in lower case)\n");
        	scanf("%s", userBlank);
        	if(strcmp(userBlank, "object code") == 0){
        		printf("correct\n");
        	    score++; 
            }else{
        	    printf("wrong, you answered %s\n", userBlank);
            }
        	
        	if(score == 3){
        		printf("congratulations! quiz passed!\n");
        			
        	   }
        	else{
        		printf("quiz not passed, retake.\n");
        	}
        	scoreAvg += score;
    	    numScores++;
        }
    }

    	if(quizNum == 3){
    	while(score != 3){
            score = 0;

            //Question 1 of Test 3
            printf("True or False: <stdio.h> lets you do math functions (ex: pow)\n");
            printf("A. True\nB. False\n");
            scanf(" %c", &userTrueFalse);
            if(toupper(userTrueFalse) == 'B') {
    	        printf("Correct\n");
    	        score++;
            }else{
    	        printf("Incorrect\n");
            }
    
            //Question 2 of Test 3
            printf("What variable type does not require an & in the scanf function?\n");
            printf("A. int\nB. double\nC. string\nD.char\n");
            scanf(" %c", &userMultChoice);
            if(toupper(userMultChoice) == 'C') {
            	printf("Correct\n");
            	score++;
            }else{
            	printf("Incorrect\n");
            }
    
            //Question 3 of Test 3
            printf("Prototypes are declared _____ the main function.(answer in lowercase)\n");
            scanf(" %s", userBlank);
            if(strcmp(userBlank, "before") == 0) {
            	printf("Correct\n");
            	score++;
            }else{
            	printf("Incorrect\n");
            }
            	if(score == 3){
            		printf("congratulations! quiz passed!\n");
            			
            	   }
            	else{
            		printf("quiz not passed,retake.\n");
            	}
            scoreAvg += score;
    	    numScores++;
            }
    	}

    	scoreAvg = scoreAvg / numScores;
    	printf("Your average score on this quiz was %lf.\n", scoreAvg);
    	while(toupper(newQuiz) != 'Y'){
    		printf("Would you like to try a new quiz?\n");
    		scanf(" %c", &newQuiz);
    		if(toupper(newQuiz) == 'N'){
    		    break;
    		}
        }
    }
}
