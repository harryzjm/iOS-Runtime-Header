//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UICanvasUserActivityManager;

__attribute__((visibility("hidden")))
@interface _UISceneUserActivityBSActionsHandler : NSObject
{
    _UICanvasUserActivityManager *_canvasUserActivityManager;
}

- (void).cxx_destruct;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (id)_launchOptionsFromActions:(id)arg1 forFBSScene:(id)arg2 uiSceneSession:(id)arg3 transitionContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

