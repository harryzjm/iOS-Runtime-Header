//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CATState, NSMutableDictionary, NSString;

@interface CATStateMachine : NSObject
{
    NSMutableDictionary *mStateByName;
    NSString *mCalloutReason;
    NSString *_name;
    CATState *_initialState;
    CATState *_currentState;
    id _target;
    unsigned long long _logLevel;
}

+ (id)new;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) CATState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) CATState *initialState; // @synthesize initialState=_initialState;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)invokeAction:(SEL)arg1 event:(id)arg2;
- (void)delegateDidEnterState:(id)arg1 event:(id)arg2;
- (void)delegateWillExitState:(id)arg1 event:(id)arg2;
- (id)eventForTriggeringEvent:(id)arg1;
- (void)transitionWithTriggeringEvent:(id)arg1;
- (_Bool)canTransitionWithTriggeringEvent:(id)arg1;
- (void)start;
- (id)stateWithName:(id)arg1;
- (void)addState:(id)arg1;
- (id)addStateWithName:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;
- (id)init;

@end

