//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KeyboardServices/_KSTextReplacementServiceProtocol-Protocol.h>

@class NSString, _KSTextReplacementServer;

@interface _KSTRClient : NSObject <_KSTextReplacementServiceProtocol>
{
    _KSTextReplacementServer *_owner;
    _Bool _hasReadAccess;
    long long _generation;
}

@property(readonly, nonatomic) _Bool hasReadAccess; // @synthesize hasReadAccess=_hasReadAccess;
@property(nonatomic) long long generation; // @synthesize generation=_generation;
- (void).cxx_destruct;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementEntriesWithReply:(CDUnknownBlockType)arg1;
- (void)cancelPendingUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)requestSyncWithReply:(CDUnknownBlockType)arg1;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)cancel;
- (id)initWithOwner:(id)arg1 forConnection:(id)arg2;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
