#include "Trie.h"


Trie::Trie() 
{
	mRoot = std::shared_ptr<TrieNode>();
}

void Trie::insert(const std::string& word)
{
	std::shared_ptr<TrieNode> node = mRoot;
	for (char c : word) 
	{
		//if(node) 
	}
}

bool Trie::search(const std::string& word)
{
	return false;
}

void Trie::readFromFile(const std::string& path)
{
}

void Trie::isCorrect(const std::string& word)
{
}

