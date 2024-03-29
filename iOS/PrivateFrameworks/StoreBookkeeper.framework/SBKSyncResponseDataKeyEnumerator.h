//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSEnumerator, SBKSyncResponseData, SBKSyncTransaction;

__attribute__((visibility("hidden")))
@interface SBKSyncResponseDataKeyEnumerator : NSObject
{
    _Bool _resolvedConflictsNeedSyncToServer;
    SBKSyncResponseData *_responseData;
    SBKSyncTransaction *_transaction;
    CDUnknownBlockType _completionBlock;
    NSEnumerator *_updatedKeysEnumerator;
    NSEnumerator *_conflictedKeysEnumerator;
    NSEnumerator *_deletedKeysEnumerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSEnumerator *deletedKeysEnumerator; // @synthesize deletedKeysEnumerator=_deletedKeysEnumerator;
@property(retain, nonatomic) NSEnumerator *conflictedKeysEnumerator; // @synthesize conflictedKeysEnumerator=_conflictedKeysEnumerator;
@property(retain, nonatomic) NSEnumerator *updatedKeysEnumerator; // @synthesize updatedKeysEnumerator=_updatedKeysEnumerator;
@property(nonatomic) _Bool resolvedConflictsNeedSyncToServer; // @synthesize resolvedConflictsNeedSyncToServer=_resolvedConflictsNeedSyncToServer;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) SBKSyncTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) SBKSyncResponseData *responseData; // @synthesize responseData=_responseData;
- (void)_processNextKey;
- (void)_processDeletedKey:(id)arg1 isDirty:(_Bool *)arg2;
- (void)_processUpdatedKey:(id)arg1 isConflict:(_Bool)arg2 isDirty:(_Bool *)arg3;
- (void)enumerateKeysInResponseForTransaction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithResponseData:(id)arg1;

@end

