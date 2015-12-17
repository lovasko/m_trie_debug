#ifndef M_TRIE_DEBUG_H
#define M_TRIE_DEBUG_H

#include <stdint.h>
#include <m_trie.h>

int m_trie_memory_usage(struct m_trie* trie, uint64_t* out_usage);
int m_trie_children_stats(struct m_trie* trie, uint64_t** out_stats);
int m_trie_interactive_walk(struct m_trie* trie, void(*print_fn)(void*));

#endif

