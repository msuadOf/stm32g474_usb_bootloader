#include <iostream>
#include <stdio.h>

class Exception{};
int main1(){
	try{
		throw Exception();
	}catch(Exception &e){
		// std::cout <<"12";
		// printf("1212%d",12);
	}
	return 0;
}
extern "C"{

int cppmain(){
	return main1();
}

}