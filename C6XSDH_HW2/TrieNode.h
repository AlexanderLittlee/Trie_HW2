#pragma once
#include <vector>
#include <memory>

class TrieNode
{
public:
	TrieNode(bool isend = false) : mEnd(isend) {};

	std::vector<std::shared_ptr<TrieNode>> children();
	bool is_end() const;
	void make_end();

private:
	bool mEnd;
	std::vector<std::shared_ptr<TrieNode>> mChildren;
};

