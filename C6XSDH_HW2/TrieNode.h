#pragma once
#include <array>
#include <memory>


class TrieNode
{
public:
	TrieNode();
	TrieNode(const bool& isend);

	bool isEnd() const;
	static std::shared_ptr<TrieNode> createNode();

private:
	bool mEnd=false;
	std::array<std::shared_ptr<TrieNode>,26> mChildren;
};

