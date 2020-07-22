//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FIUIState, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface FIUIStateMachine : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_states;
    FIUIState *_state;
    FIUIState *_initialState;
    _Bool _handlingEvent;
    NSMutableArray *_pendingEvents;
    NSString *_queueKey;
    NSMutableArray *_transitionalEvents;
    NSString *_label;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _diagnosticHandler;
    CDUnknownBlockType _transitionalEventFilter;
    long long _pendingEvent;
}

@property long long pendingEvent; // @synthesize pendingEvent=_pendingEvent;
@property(copy) CDUnknownBlockType transitionalEventFilter; // @synthesize transitionalEventFilter=_transitionalEventFilter;
@property(copy) CDUnknownBlockType diagnosticHandler; // @synthesize diagnosticHandler=_diagnosticHandler;
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)graphDescription;
- (id)description;
- (void)addStates:(id)arg1;
- (void)addState:(id)arg1;
- (id)state;
- (void)_queue_setInitialStateIfNeeded:(id)arg1;
- (void)_queue_handleEvents;
- (void)_queue_processEvent:(long long)arg1;
- (id)queue;
- (void)eventAsync:(long long)arg1;
- (void)event:(long long)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 queue:(id)arg2;

@end

