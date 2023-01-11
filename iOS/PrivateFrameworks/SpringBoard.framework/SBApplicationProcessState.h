//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBApplicationProcess, FBProcessState;

@interface SBApplicationProcessState : NSObject
{
    FBApplicationProcess *_process;
    FBProcessState *_processState;
    _Bool _isBeingDebugged;
}

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool isBeingDebugged;
@property(readonly, nonatomic) long long visibility;
@property(readonly, nonatomic) long long taskState;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) int pid;
- (id)_initWithProcess:(id)arg1 stateSnapshot:(id)arg2;

@end
