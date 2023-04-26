#include "TrieNode.h"

TrieNode::TrieNode()
{
}

TrieNode::TrieNode(const bool& isend)
	: mEnd(isend)
{}


bool TrieNode::isEnd() const
{
	return mEnd;
}

void TrieNode::makeEnd()
{
	mEnd = true;
}

std::shared_ptr<TrieNode> TrieNode::createNode()
{
	return std::make_shared<TrieNode>();
}
