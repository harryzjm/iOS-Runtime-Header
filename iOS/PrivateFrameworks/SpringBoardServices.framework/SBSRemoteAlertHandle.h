//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSRemoteAlertClientHandle-Protocol.h>

@class BSMachPortSendRight, NSHashTable, NSString, SBSRemoteAlertClient;
@protocol OS_dispatch_queue;

@interface SBSRemoteAlertHandle : NSObject <SBSRemoteAlertClientHandle>
{
    SBSRemoteAlertClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    BSMachPortSendRight *_token;
    _Bool _active;
    NSHashTable *_observers;
}

+ (id)handleWithConfiguration:(id)arg1;
+ (id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(_Bool)arg2;
+ (id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1;
+ (id)_lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2;
- (void).cxx_destruct;
- (void)queue_noteInvalidWithError:(id)arg1;
- (void)queue_setActive:(_Bool)arg1;
- (id)queue_token;
- (void)_queue_callObserversWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)activateWithContext:(id)arg1;
- (void)activateWithOptions:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_initWithHandleToken:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

