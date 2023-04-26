#pragma once
#include <array>
#include <memory>


class TrieNode
{
public:
	std::array<std::shared_ptr<TrieNode>,26> mChildren;
	
	TrieNode();
	TrieNode(const bool& isend);

	bool isEnd() const;
	void makeEnd();
	static std::shared_ptr<TrieNode> createNode();

private:
	bool mEnd=false;
};

