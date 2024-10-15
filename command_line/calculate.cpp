using namespace std;
#include <iostream>

double max(int argc,  char const *argv[]);
double sum(int argc,  char const *argv[]);
double product(int argc,  char const *argv[]);
double avg(int argc,  char const *argv[]);

int main(int argc, char const *argv[])
{
    if (argc <3)
    {
        cerr<<"No argument";
        return -1;
    }

    string operation= argv[1];

    try
    {      
        if(operation == "--max") cout<<"Max: "<<max(argc,argv)<<endl;
        else if(operation == "--sum") cout<<"Sum: "<<sum(argc,argv)<<endl;
        else if(operation == "--product") cout<<"Product: "<<product(argc,argv)<<endl;
        else if(operation == "--average") cout<<"Average value: "<<avg(argc,argv)<<endl;
        else {
            cerr<<"Command "<<operation<<" doesn't exist";
            return -1;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() <<" Input error"<< '\n';
        return -1;
    }
    
    
    return 0;
}


double max(int argc,  char const *argv[]){
   double max=stod(argv[2]);
   for (size_t i = 3; i < argc; i++)
   {
    double num=stod(argv[i]);
    if (num>max)max=num;
   }
   
   return max;   
}

double sum(int argc,  char const *argv[]){
    double sum=stod(argv[2]);
   for (size_t i = 3; i < argc; i++)
   {
    double num=stod(argv[i]);
    sum+=num;
   }
   
   return sum; 
}

double product(int argc,  char const *argv[]){
    double prod=1;
   for (size_t i = 2; i < argc; i++)
   {
    double num=stod(argv[i]);
    prod*=num;
   }
   
   return prod; 
}

double avg(int argc,  char const *argv[]){
    double number_count=argc-2;
    double sum_values=sum(argc,argv);
   return sum_values/number_count;
}