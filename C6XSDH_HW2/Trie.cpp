#include "Trie.h"


Trie::Trie() 
	: mRoot(TrieNode::createNode())
{}

void Trie::insert(const std::string& word)
{
	std::shared_ptr<TrieNode> node = mRoot;
	for (char c : word) 
	{
		int idx = c - 'a';
		if (!node->mChildren[idx])
			node->mChildren[idx] = TrieNode::createNode();

		node = node->mChildren[idx];
	}
	node->makeEnd();
}

bool Trie::search(const std::string& word)
{
	std::shared_ptr<TrieNode> node = mRoot;
	for (char c : word)
	{
		int idx = c - 'a';
		if (!node->mChildren[idx])
			return false;

		node = node->mChildren[idx];
	}
	return node->isEnd();
}

bool Trie::startsWith(const std::string& prefix)
{
	std::shared_ptr<TrieNode> node = mRoot;
	for (char c : prefix)
	{
		int idx = c - 'a';
		if (!node->mChildren[idx])
			return false;

		node = node->mChildren[idx];
	}
	return true;
}

void Trie::readFromFile(const std::string& path)
{
	//ez olvassa be a fájlt és csinál trie-t belõle
}

void Trie::isCorrect(const std::string& word)
{
	//ez a bevitt szöveget ellenõrzi
}

