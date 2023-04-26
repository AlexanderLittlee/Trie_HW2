#include "TrieNode.h"
#include "Trie.h"
#include <iostream>

int main() 
{
	Trie dictionary;

	dictionary.readFromFile("wordsHu.txt");

	std::string input;
	std::getline(std::cin,input);

	dictionary.isCorrect(input);

	return 0;
}