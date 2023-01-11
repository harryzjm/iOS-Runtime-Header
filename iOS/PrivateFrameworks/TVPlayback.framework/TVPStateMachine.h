//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface TVPStateMachine : NSObject
{
    CDUnknownBlockType _stateChangeHandler;
    NSMutableArray *_events;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_defaultHandlers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_blocksToExecuteAfterStateTransition;
    _Bool _handlingEvent;
    _Bool _shouldAcceptEvents;
    _Bool _callsStateChangeHandlerSynchronously;
    NSString *_loggingComponent;
    NSString *_name;
    NSString *_currentState;
    long long _mode;
    NSObject<OS_os_log> *_logObject;
    NSArray *_ignorableEvents;
}

+ (id)stateMachinesOfType:(Class)arg1;
+ (void)deregisterStateMachine:(id)arg1;
+ (id)stateMachineWithName:(id)arg1;
+ (void)registerStateMachine:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool callsStateChangeHandlerSynchronously; // @synthesize callsStateChangeHandlerSynchronously=_callsStateChangeHandlerSynchronously;
@property(copy) NSArray *ignorableEvents; // @synthesize ignorableEvents=_ignorableEvents;
@property(retain, nonatomic) NSObject<OS_os_log> *logObject; // @synthesize logObject=_logObject;
@property _Bool shouldAcceptEvents; // @synthesize shouldAcceptEvents=_shouldAcceptEvents;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy) NSString *currentState; // @synthesize currentState=_currentState;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)logUnhandledEvents;
- (void)deregisterHandlers;
- (void)executeBlockAfterCurrentStateTransition:(CDUnknownBlockType)arg1;
- (void)registerStateTransitionFromState:(id)arg1 onEvent:(id)arg2 toState:(id)arg3;
- (void)registerDefaultHandlerForEvent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)registerHandlerForEvents:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)registerHandlerForEvent:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)registerHandlerForEvent:(id)arg1 onState:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)purgeEventQueue;
- (void)postEvent:(id)arg1 withContext:(id)arg2 userInfo:(id)arg3;
- (void)postEvent:(id)arg1 withContext:(id)arg2;
- (void)postEvent:(id)arg1;
@property(copy, nonatomic) NSString *loggingComponent; // @synthesize loggingComponent=_loggingComponent;
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 stateChangeHandler:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3;
- (CDUnknownBlockType)_eventHandlerForEvent:(id)arg1;
- (void)_dispatchEvent:(id)arg1;
- (void)_processEvent:(id)arg1;
- (void)_processNextEvent;
- (void)_executePostTransitionBlocks;
- (void)_transitionToState:(id)arg1 withEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4;

@end
