//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimatorMonolith
{
    NSMutableDictionary *_selectedKeyTimestamps;
    NSMutableDictionary *_transitionCompletions;
}

- (void).cxx_destruct;
- (void)reset;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;
- (void)animateFloatingKeyView:(id)arg1 toControlState:(unsigned long long)arg2;
- (void)transitionFloatingKeyView:(id)arg1 toState:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addTransitionCompletion:(CDUnknownBlockType)arg1 forKeyName:(id)arg2;
- (long long)_transitionFromState:(int)arg1 toState:(int)arg2;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (unsigned long long)controlStateForKeyState:(int)arg1;
- (Class)keyViewClassForKey:(id)arg1 renderTraits:(id)arg2 screenTraits:(id)arg3;
- (_Bool)shouldPurgeKeyViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

