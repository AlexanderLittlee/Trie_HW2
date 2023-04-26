#include "Trie.h"


Trie::Trie() 
	: mRoot(TrieNode::createNode())
{}

void Trie::insert(const std::string& word)
{
	
}

bool Trie::search(const std::string& word)
{
	return 0;
}

bool Trie::startsWith(const std::string& word)
{
	return false;
}

void Trie::readFromFile(const std::string& path)
{
	//ez olvassa be a fájlt és csinál trie-t belõle
}

void Trie::isCorrect(const std::string& word)
{
	//ez a bevitt szöveget ellenõrzi
}

