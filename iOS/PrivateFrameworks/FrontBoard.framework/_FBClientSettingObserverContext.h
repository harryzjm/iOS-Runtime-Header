//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext, FBScene;

@interface _FBClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    FBSSceneTransitionContext *_transitionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (id)initWithScene:(id)arg1 transitionContext:(id)arg2;

@end
