//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUState, CUStateMachine, NSDictionary, NSPointerArray;

@interface SUICProgressStateMachine : NSObject
{
    CUStateMachine *_underlyingStateMachine;
    NSDictionary *_stateForStateName;
    unsigned long long _currentState;
    CUState *_abstractState;
    NSPointerArray *_stateMachineObservers;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_stateMachineObservers, setter=_setStateMachineObservers:) NSPointerArray *stateMachineObservers; // @synthesize stateMachineObservers=_stateMachineObservers;
- (void)_ignoreEvent:(unsigned long long)arg1;
- (void)_transitionToState:(unsigned long long)arg1 forEvent:(unsigned long long)arg2;
- (void)addObservers:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setObservers:(id)arg1;
@property(readonly) unsigned long long state;
- (void)handleEvent:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end
