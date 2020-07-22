//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WBSURLSuffixChecker : NSObject
{
    struct {
        unsigned short _field1[27];
    } *_trie;
    unsigned int _trieNodeCount;
    unsigned long long _maxLength;
    NSMutableArray *_failedSuffixes;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasSuffix:(id)arg1;
- (id)initWithSuffixes:(id)arg1;
- (void)addStringToFailedSuffixes:(id)arg1;
- (_Bool)insertString:(id)arg1 intoTrieWithCache:(CDStruct_f2b84ca7 *)arg2;

@end

