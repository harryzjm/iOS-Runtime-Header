//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOPNRAccessTrieReader : NSObject
{
    struct _CFBurstTrie *_trie;
    NSData *_accessFile;
}

- (void).cxx_destruct;
- (id)lookup:(id)arg1;
- (void)dealloc;
- (id)initWithFile:(id)arg1;

@end
