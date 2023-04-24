#include "TrieNode.h"

std::vector<std::shared_ptr<TrieNode>> TrieNode::children()
{
	return this->mChildren;
}

bool TrieNode::is_end() const
{
	return mEnd;
}

void TrieNode::make_end()
{
	mEnd = true;
}
