#pragma once
#include <array>
#include <memory>


class TrieNode
{
public:
	TrieNode();
	TrieNode(const bool& isend);

	bool is_end() const;
	std::shared_ptr<TrieNode> create_node();

private:
	bool mEnd=false;
	std::array<std::shared_ptr<TrieNode>,26> mChildren;
};

