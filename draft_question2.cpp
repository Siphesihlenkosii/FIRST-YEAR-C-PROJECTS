#include <iostream>
//Declare global constant
const int NUM_QUESTIONS= 25;

 //PassOrNot function
 bool passOrNot(const char answerArray[], const char correctAnswer[]){
   int rightanswer=0;

    for (int i=0; i< NUM_QUESTIONS; i++){
        if (answerArray[i]==correctAnswer[i]){
        rightanswer ++;
        }
    }

    if (rightanswer>=13)
        {
        return true;
        std::cout<<"Result: Pass"<<std::endl;
        }
    else
        {
        return false;
                std::cout<<"Result: Fail"<<std::endl;

        }
 }


 //main function
 int main()
 { //declare all the given main function variables
     char answerArray[NUM_QUESTIONS];
     char correctArray[NUM_QUESTIONS];
     bool pass;

     for (int p=0; p < NUM_QUESTIONS;p++){
        answerArray[p]='Y';
        correctArray[p]='Y';
        }

      pass=passOrNot(answerArray,correctArray);

      if (pass){
            std::cout<<"Result:Pass"  <<std::endl;
        }else {
            std::cout<<"Result:Fail "<<std::endl;
        }
     return 0;
 }


