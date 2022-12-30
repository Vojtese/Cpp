#include <iostream>

//Function that takes a single parameter, and doesn't
//give back the result explicitly

void enter_bar(int age){
    if(age >18){
        std::cout << "You are " << age << " years old. PLease proceed." << std::endl;
    }else{
        std::cout << "Sorry, you're too young for this. No offense! " << std::endl;
    }
}

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

void say_hello(){
    std::cout << "Hello there" << std::endl;
    return; // for void can be omitted
}

int lucky_number(){
    return 42;
}

//Parameters passed this way are scoped localy in the function.
//Changes to them are not visible outside the function. What we
//have inside the function are actually COPIES of the arguments
//passed to the function.
double increment_multiply( double a ,double b){
	
	std::cout << "Inside function , before increment : " << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
    
    double result = ((++a)  * (++b));
    
	std::cout << "Inside function , after increment : " << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
    
    //Returning the result
    return result;
}

int main(int argc, char **argv){
    /*
    int a_val {14};
    int b_val {10};

    int a{33};
    int b{41};  //Show that parameters and arguments can have the same name

    std::cout << "Calling the enter_bar function : " << std::endl;
    enter_bar(22);

    int maximum_number {max(a_val,b_val)};
    std::cout << "max(" << a <<"," << b << ") : " << max(a,b) << std::endl;

    std::cout << "Calling say_hello method : " << std::endl;
    say_hello();

    std::cout << "Your lucky number is : " << lucky_number() << std::endl;
    */
    double h{3.00};
    double i{4.00};
							
	std::cout << "Outside function , before increment : " << std::endl;
	std::cout << "h : " << h << std::endl;
	std::cout << "i : " << i << std::endl;
    
    double incr_mult_result = increment_multiply(h,i);
    
	std::cout << "Outside function , before increment : " << std::endl;
	std::cout << "h : " << h << std::endl;
	std::cout << "i : " << i << std::endl;

    return 0;
}
