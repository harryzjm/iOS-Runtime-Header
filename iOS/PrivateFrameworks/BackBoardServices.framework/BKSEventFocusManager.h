//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSXPCConnection;
@protocol BKSEventFocusIPCInterface, OS_dispatch_queue;

@interface BKSEventFocusManager : NSObject
{
    id <BKSEventFocusIPCInterface> _ipcInterface;
    NSObject<OS_dispatch_queue> *_focusClientQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    unsigned long long _propertyUpdateGeneration;
    _Bool _needsFlush;
    _Bool _systemAppControlsFocusOnMainDisplay;
    int _pid;
    NSMutableSet *_currentState;
    NSMutableDictionary *_pendingStatesByPriority;
    NSXPCConnection *_connection;
    NSMapTable *_infoPerFocusChangeObserver;
    NSSet *_cachedFocusedDeferralProperties;
    NSString *_clientIdentifier;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSSet *cachedFocusedDeferralProperties; // @synthesize cachedFocusedDeferralProperties=_cachedFocusedDeferralProperties;
@property(retain, nonatomic) NSMapTable *infoPerFocusChangeObserver; // @synthesize infoPerFocusChangeObserver=_infoPerFocusChangeObserver;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool systemAppControlsFocusOnMainDisplay; // @synthesize systemAppControlsFocusOnMainDisplay=_systemAppControlsFocusOnMainDisplay;
@property(nonatomic) _Bool needsFlush; // @synthesize needsFlush=_needsFlush;
@property(readonly, nonatomic) NSMutableDictionary *pendingStatesByPriority; // @synthesize pendingStatesByPriority=_pendingStatesByPriority;
@property(readonly, nonatomic) NSMutableSet *currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (void)_syncObserverState;
- (void)reallyFlushWithSet:(id)arg1;
- (void)flush;
- (void)_rebuildPendingStatesByPriority;
- (void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(CDUnknownBlockType)arg2;
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2;
- (void)touchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(_Bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;
- (void)focusedDeferralPropertiesUpdatedWithProperties:(id)arg1;
- (void)_connectToEventFocusService;
- (void)dealloc;
- (id)initWithIPCInterface:(id)arg1;
- (id)init;

@end

