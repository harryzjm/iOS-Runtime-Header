//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, PKCatalogGroup;
@protocol PKGroupDelegate;

@interface PKGroup : NSObject
{
    PKCatalogGroup *_catalogGroup;
    NSMutableDictionary *_passesByUniqueID;
    _Bool _local;
    id <PKGroupDelegate> _delegate;
    unsigned long long _frontmostPassIndex;
}

@property(nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(nonatomic) unsigned long long frontmostPassIndex; // @synthesize frontmostPassIndex=_frontmostPassIndex;
@property(nonatomic) __weak id <PKGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeUniqueID:(id)arg1 notify:(_Bool)arg2;
- (void)_moveUniqueID:(id)arg1 toIndex:(unsigned long long)arg2 notify:(_Bool)arg3;
- (void)_insertPass:(id)arg1 atIndex:(unsigned long long)arg2 notify:(_Bool)arg3;
- (void)_updatePass:(id)arg1 notify:(_Bool)arg2;
- (unsigned long long)_indexOfUniqueID:(id)arg1;
- (id)passWithUniqueID:(id)arg1;
- (void)enumerateUniqueIDsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)containsOnlyUniqueID:(id)arg1;
- (_Bool)containsPasses;
- (void)handleUserPassDelete:(id)arg1;
- (id)copyCatalogGroup;
- (void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(_Bool)arg3;
- (id)initWithCatalogGroup:(id)arg1 passes:(id)arg2;
- (unsigned long long)indexForPassUniqueID:(id)arg1;
- (id)passes;
- (id)passAtIndex:(unsigned long long)arg1;
- (unsigned long long)passCount;
@property(readonly, nonatomic) NSNumber *groupID;
- (id)description;

@end

