#include <iostream>
    //create the getData function(prompt & return weight and height)

     void getData(float &user_weightP, float &user_heightP)
    {
      std::cout<<"Enter your weight(In Kg): ";
      std::cin>>user_weightP;

      std::cout<<"Enter your height (In m): ";
      std::cin>>user_heightP;
    }

    //ccals BMI Kg/m^2

    float calcBMI(float user_weightP, float  user_heightP, float &BMIP)
    {
      return BMIP=user_weightP/ (user_heightP*user_heightP);
    }
    //create the displayFitnessResult function

    void displayFitnessResults(float BMIP )
    {
        std::cout<<"BMI: "<<BMIP<<" Kg/m^2"<<std::endl;
        if(BMIP<18.5)
        {
            std::cout<<"Weight status: Underweight"<<std::endl;
        }
        else if(BMIP>=18.5 && BMIP<=24.9)
        {
            std::cout<<"Weight status: Healthy"<<std::endl;
        }

        else if(BMIP>=25.0 && BMIP<=29.9)
        {
            std::cout<<"Weight status: Overweight"<<std::endl;
        }
        else
            std::cout<<"Weight status: Obese"<<std::endl;
    }

    int main()
    {
       float user_weight=0.0;
        float user_height= 0.0;
         float BMI =0.0;

         getData(user_weight,user_height);
         BMI=calcBMI(user_weight,user_height);
         displayFitnessResults(BMI);

         return 0;
    }
