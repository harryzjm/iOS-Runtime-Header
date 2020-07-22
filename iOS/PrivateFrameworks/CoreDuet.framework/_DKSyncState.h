//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, _DKKnowledgeSyncStorageAssertion;

@interface _DKSyncState : NSObject
{
    _Bool _needsCloudSyncDown;
    _Bool _needsCloudSyncUp;
    NSError *_error;
    _DKKnowledgeSyncStorageAssertion *_assertion;
    NSMutableArray *_replies;
}

@property(retain) NSMutableArray *replies; // @synthesize replies=_replies;
@property(retain) _DKKnowledgeSyncStorageAssertion *assertion; // @synthesize assertion=_assertion;
@property(retain) NSError *error; // @synthesize error=_error;
@property _Bool needsCloudSyncUp; // @synthesize needsCloudSyncUp=_needsCloudSyncUp;
@property _Bool needsCloudSyncDown; // @synthesize needsCloudSyncDown=_needsCloudSyncDown;
- (void).cxx_destruct;
- (void)finish;
- (void)addReplyBlock:(CDUnknownBlockType)arg1;
- (id)initWithSyncStorageAssertion:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
