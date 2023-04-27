#include "TrieNode.h"
#include "Trie.h"
#include <iostream>

int main() 
{


	Trie dictionary;
	dictionary.readFromFile("wordsEn.txt");

		
	std::cout << "Enter english words to see if you spell them correctly!" << std::endl << std::endl << std::endl;
		
	
	std::string input;
	std::getline(std::cin,input);


	dictionary.isCorrect(input);


	return 0;
}