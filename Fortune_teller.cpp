#include<iostream>
#include<ctime>
int main(){

// srand has to run once per programm rum for random num...
std::srand(std::time(0));

    char prediction0[]{ "a lot of kinds running in the backyard!" };
    char prediction1[]{ "a lot of empty beer bootles on your work table." };
    char prediction2[]{ "you Partying too much with kids wearing weird clothes." };
    char prediction3[]{ "you running away from something really scary" };
    char prediction4[]{ "clouds gathering in the sky and an army standing ready for war" };
    char prediction5[]{ "dogs running around in a deserted empty city" };
    char prediction6[]{ "a lot of cars stuck in a terrible traffic jam" };
    char prediction7[]{ "you sitting in the dark typing lots of lines of code on your dirty computer" };
    char prediction8[]{ "you yelling at your boss. And oh no! You get fired!" };
    char prediction9[]{ "you laughing your lungs out. I've never seen this before." };

bool end {false};

const int max_length {15};
char name [max_length]{};
std::cout<<"what is ur name dear:anjli";

std::cin.getline(name,max_length);

 while (!end){
    std::cout<<"Oh dear "<< name << " , I see ";
    size_t ran_num = static_cast<size_t>((std::rand()%11));     // static_cast<data_type>data------ this is the syntex..
    
    switch (ran_num){
         // we get the valu of ran_num in the range of 0-10 because of above equation
        case 0:
        std::cout<<prediction0<<"\n";
        break;

        case 1:
        std::cout<<prediction1<<"\n";
        break;

        case 2:
        std::cout<<prediction2<<"\n";
        break;
        
        case 3:
        std::cout<<prediction3<<"\n";
        break;

        case 4:
        std::cout<<prediction4<<"\n";
        break;

        case 5:
        std::cout<<prediction5<<"\n";
        break;

        case 6:
        std::cout<<prediction6<<"\n";
        break;

        case 7:
        std::cout<<prediction7<<"\n";
        break;

        case 8:
        std::cout<<prediction8<<"\n";
        break;

        case 9:
        std::cout<<prediction9<<"\n";
        break;
    
    default:
        std::cout<<" , humm, I dont see anything...";

    }

     std::cout<<"DO you want me try again? (Y | N): ";

     char go_on;
     std::cin>> go_on;

     end = ((go_on=='y')||(go_on=='Y')) ? false : true;

}
std::cout<<"hat's all I have for you today dear. Best wishes\n";



    return 0;
}