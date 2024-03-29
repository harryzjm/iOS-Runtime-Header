//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NFCSession, NSArray, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NFCHardwareManager : NSObject
{
    NSHashTable *_delegates;
    NFCSession *_xpcSession;
    NSMutableDictionary *_queuedReaderSessions;
    NSObject<OS_dispatch_semaphore> *_hwSupportStateUpdate;
    struct os_unfair_lock_s _readerSessionLock;
}

+ (id)sharedHardwareManager;
- (void).cxx_destruct;
- (void)didInvalidate;
- (void)hwStateDidChange:(unsigned int)arg1;
- (id)getReaderSessionWithKey:(id)arg1;
- (void)areFeaturesSupported:(unsigned long long)arg1 expiry:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id *)arg2;
- (void)addNFCHardwareManagerCallbacksListener:(id)arg1;
@property(readonly, copy, nonatomic, getter=getDelegates) NSArray *delegates;
- (void)dequeueReaderSession:(id)arg1;
- (void)queueReaderSession:(id)arg1 sessionConfig:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

