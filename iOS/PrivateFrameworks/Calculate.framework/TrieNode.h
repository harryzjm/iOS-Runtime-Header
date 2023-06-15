//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Trie;

__attribute__((visibility("hidden")))
@interface TrieNode : NSObject
{
    int _node;
    int _offset;
    Trie *_trie;
}

- (void).cxx_destruct;
@property(nonatomic) int offset; // @synthesize offset=_offset;
@property(nonatomic) int node; // @synthesize node=_node;
@property(nonatomic) __weak Trie *trie; // @synthesize trie=_trie;

@end

