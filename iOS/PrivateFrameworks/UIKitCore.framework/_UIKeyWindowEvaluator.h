//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindow, _UIKeyWindowSceneStack;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UIKeyWindowEvaluator : NSObject
{
    unsigned long long _countOfFBSSceneBackedScenesByShiftedIdiom[11];
    unsigned long long _defaultEvaluationStrategyByShiftedIdiom[11];
    _UIKeyWindowSceneStack *_keyWindowSceneStack;
    _UIKeyWindowSceneStack *_excludedSceneStack;
    UIWindow *_applicationKeyWindow;
    id <BSInvalidatable> _stateCaptureToken;
}

+ (id)sharedEvaluator;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

