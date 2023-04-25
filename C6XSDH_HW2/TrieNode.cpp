#include "TrieNode.h"

TrieNode::TrieNode()
{
}

TrieNode::TrieNode(const bool& isend)
	: mEnd(isend)
{}

std::vector<std::shared_ptr<TrieNode>>* TrieNode::children()
{
	return nullptr;
}


bool TrieNode::is_end() const
{
	return mEnd;
}

void TrieNode::make_end()
{
	mEnd = true;
}

void TrieNode::add_node()
{
	
}
