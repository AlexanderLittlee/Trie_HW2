#pragma once
#include <vector>
#include <memory>

class TrieNode
{
public:
	TrieNode();
	TrieNode(const bool& isend);

	std::vector<std::shared_ptr<TrieNode>>* children();
	std::shared_ptr<TrieNode> children(const char& c);
	bool is_end() const;
	void make_end();
	void add_node();

private:
	bool mEnd=false;
	std::vector<std::shared_ptr<TrieNode>> mChildren;
};

