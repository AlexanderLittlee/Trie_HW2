#include "TrieNode.h"
#include "Trie.h"
#include <iostream>

int main() 
{
	Trie dictionary;
	dictionary.insert("alma");
	std::cout << dictionary.search("alma") << std::endl;		//1
	std::cout << dictionary.search("korte") << std::endl;		//0
	dictionary.insert("bicikli");
	dictionary.insert("korte");
	std::cout << dictionary.search("korte") << std::endl;		//1
	std::cout << dictionary.search("auto") << std::endl;		//0
	std::cout << dictionary.search("bicikli") << std::endl;		//1
	std::cout << dictionary.startsWith("al") << std::endl;		//1
	std::cout << dictionary.startsWith("ku") << std::endl;		//0


	return 0;
}