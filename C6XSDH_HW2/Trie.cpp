#include "Trie.h"
#include <sstream>
#include <fstream>
#include <iostream>

Trie::Trie() 
	: mRoot(TrieNode::createNode())
{}

void Trie::insert(const std::string& word)
{
	std::shared_ptr<TrieNode> node = mRoot;
	for (char c : word) 
	{
		int idx = c - 'a';
		if (idx < 0 || idx>25)
			return;

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
	//entert kezeld le
	std::ifstream fileReader(path);
	std::string line="";
	while (getline(fileReader,line))
	{
		if (line.find("'") == std::string::npos)
			insert(line);
		else
			line = "";
	}
	fileReader.close();
}

void Trie::isCorrect(const std::string& word)
{
	bool correct = true;
	std::string w;
	std::stringstream ss(word);
	while (correct && ss >> w)
	{
		correct = search(w);
	}
	
	if (correct)
		std::cout << "Your text is correct" << std::endl;
	else
		std::cout << "Your text is not correct" << std::endl;
}

