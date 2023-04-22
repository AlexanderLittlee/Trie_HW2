#pragma once
#include <vector>
#include <memory>

class TrieNode
{
public:
	TrieNode(bool isend = false) : mEnd(isend) {};
	~TrieNode() {};

	//getChildren

private:
	bool mEnd;
	std::vector<std::shared_ptr<TrieNode>> mChildren;
};

