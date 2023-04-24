#include "Trie.h"


Trie::Trie() 
{
	mRoot = std::shared_ptr<TrieNode>();  //ez amúgy lehet hogy fölösleges

}

void Trie::insert(const std::string& word)
{
	std::shared_ptr<TrieNode> node = mRoot;
	for (char c : word) 
	{
		if (node->children()[c] == 0)
			return;	//új trienode hozzáadás
		
		node = node->children()[c];
	}
	node->make_end();
}

bool Trie::search(const std::string& word)
{
	std::shared_ptr<TrieNode> node = mRoot;
	for (char c : word)
	{
		if (node->children()[c] == 0)
			return false;
		
		node = node->children()[c];
	}
	return node!=nullptr;
}

void Trie::readFromFile(const std::string& path)
{
	//ez olvassa be a fájlt és csinál trie-t belõle
}

void Trie::isCorrect(const std::string& word)
{
	//ez a bevitt szöveget ellenõrzi
}

