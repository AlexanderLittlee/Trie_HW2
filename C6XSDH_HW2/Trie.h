#pragma once
#include "TrieNode.h"
#include <string>

class Trie
{
public:
	Trie();
	
	void insert(const std::string& word);
	bool search(const std::string& word);
	bool startsWith(const std::string& prefix);

	void readFromFile(const std::string& path);
	void isCorrect(const std::string& word);

private:
	std::shared_ptr<TrieNode> mRoot;
};

