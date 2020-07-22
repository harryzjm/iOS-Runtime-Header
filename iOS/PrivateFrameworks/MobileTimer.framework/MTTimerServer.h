//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTTimerObserver-Protocol.h>
#import <MobileTimer/MTTimerServer-Protocol.h>

@class MTTimerStorage, MTXPCConnectionListenerProvider, NSString;
@protocol NAScheduler;

@interface MTTimerServer : NSObject <MTTimerObserver, MTTimerServer, MTAgentDiagnosticDelegate>
{
    _Bool _systemReady;
    MTTimerStorage *_storage;
    MTXPCConnectionListenerProvider *_connectionListenerProvider;
    id <NAScheduler> _serializer;
}

@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(readonly, nonatomic, getter=isSystemReady) _Bool systemReady; // @synthesize systemReady=_systemReady;
@property(readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider; // @synthesize connectionListenerProvider=_connectionListenerProvider;
@property(readonly, nonatomic) MTTimerStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)printDiagnostics;
- (void)nextTimerDidChange:(id)arg1;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getTimersWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isSystemReady;
- (id)_systemNotReadyError;
- (void)checkIn;
- (void)handleSystemReady;
- (void)stopListening;
- (void)startListening;
- (id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

