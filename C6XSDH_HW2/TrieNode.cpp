#include "TrieNode.h"

TrieNode::TrieNode()
{
}

TrieNode::TrieNode(const bool& isend)
	: mEnd(isend)
{}


bool TrieNode::is_end() const
{
	return mEnd;
}

std::shared_ptr<TrieNode> TrieNode::create_node()
{
	return std::make_shared<TrieNode>();
}
