//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVTaskAssertion, NSString, NSXPCConnection;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _MLChangeObserver : NSObject
{
    _Bool _timedOut;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    MSVTaskAssertion *_taskAssertion;
    NSString *_bundleID;
}

+ (id)observerWithConnection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic, getter=hasTimedOut) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(retain, nonatomic) MSVTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)tearDownTimeoutTimer;
- (void)setupTimeoutTimer;
- (void)tearDownTaskAssertion;
- (void)setupTaskAssertion;
@property(readonly, copy) NSString *description;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

