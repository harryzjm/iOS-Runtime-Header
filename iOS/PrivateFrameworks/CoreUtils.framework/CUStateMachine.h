//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CUState, NSArray, NSMutableArray, NSPointerArray;

@interface CUStateMachine : NSObject
{
    CUState *_currentState;
    NSMutableArray *_eventQueue;
    _Bool _dispatching;
    NSPointerArray *_lcaPath;
    _Bool _started;
    CUState *_targetState;
    CUState *_initialState;
    NSArray *_states;
}

@property(retain, nonatomic) NSArray *states; // @synthesize states=_states;
@property(retain, nonatomic) CUState *initialState; // @synthesize initialState=_initialState;
- (void).cxx_destruct;
- (void)_firstTimeInit;
- (void)transitionToState:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (void)invalidate;
- (void)start;
- (void)dealloc;

@end
