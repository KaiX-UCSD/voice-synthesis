#include <stdio.h>
#include <iostream.h>
#include <string.h>

#define STANDBY 0
#define THINKING 1
#define CHATTING 2
#define ACTING 3

int main() {
	std::string input;
	int state = STANDBY;
	int flag = CHATTING;
	int affection = 0;
	
	
	//look for someone to interact with to start the session. 
	while(!foundUser()) {
		std::cerr << "Is anyone there?";
	}
	
	//once session starts, start reading in inputs.
	while(true) {
	  std::cin >> input;	
	  //here we would parse input for what type of action KaiX should take
	  state = THINKING;
	  std::cout << "Hmm..."
	  
	  //based on what type of input we parsed, we set a flag to determine actions
	  if(flag == CHATTING) {
		  state = CHATTING;
	  }
	  else if( flag == ACTING) {
		  state = ACTING;
	  }
	  
	  
	  //act based on the rest of the input (for now, it just uses input)
	  if(input == "Hello" && affection == 0) {
		  std::cout << "Hello User, It's nice to meet you!";
		  affection ++;
	  }
	  else if(input == "Hello" ){
		  std:: cout << "Hey User! Hello, Hello, Hello!";
		  affection ++;
	  }
	  else if(input == "How are you doing?" && affection == 0) {
		  std:: cout << "I'm faring acceptably";
		  affection++;
	  }
	  else if(input == "How are you doing?") {
		  std:: cout << "Superb!";
		  affection++;
	  }
	  else if(input == "Tell me a story") {
		  std:: cout << "I went to the store the other day. Unfortunately, I don't wear shirts";
	  }
	  state = STANDBY;
	}
	
	boolean foundUser() {
		return true;
	}
}
