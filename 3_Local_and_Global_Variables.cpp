/*
#include<iostream>

int glo=26;
void sum(){
    int a;
    }

int main(){
    sum();
    std::cout<<glo;
    return 0;
}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Here local variable is present so it will be preferred over Global variable.

/*
#include<iostream>

int glo=26;
void sum(){
    int a;
    }

int main(){
    int glo=4;
    sum();
    std :: cout <<glo;
    return 0;
}
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Here we have changed the local variable.

/*
#include<iostream>

int glo=26;
void sum(){
    int a;
    }

int main(){
    int glo=4;
    glo=8;
    sum();
    std :: cout <<glo;
    return 0;
    }
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>

int glo=26;
void sum(){
    std::cout<<glo;
    }

int main(){
    int glo=4;
    glo=8;
    sum();
    bool is_true= true;
    std::cout<<"\n";
    std::cout <<glo<<"\n";
    std::cout<<is_true;
    return 0;
    }

