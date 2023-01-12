//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CDMFoundation/CDMBaseTrie-Protocol.h>

@class NSNumber, NSString;

@interface CDMMarisaTrie : NSObject <CDMBaseTrie>
{
    NSString *_filePath;
    struct Trie _readOnlyTrie;
    NSNumber *_versionNumber;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_readCachedNumberValueForKey:(id)arg1;
- (_Bool)_loadTrie;
- (id)traversePrefix:(id)arg1;
- (_Bool)hasPrefix:(id)arg1;
- (_Bool)hasEntry:(id)arg1;
- (_Bool)createFromEntries:(id)arg1 withHashValue:(id)arg2;
- (_Bool)createFromEntries:(id)arg1;
@property(readonly, nonatomic) NSNumber *hashValue;
@property(readonly, nonatomic) _Bool isValid;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 versionNumber:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
