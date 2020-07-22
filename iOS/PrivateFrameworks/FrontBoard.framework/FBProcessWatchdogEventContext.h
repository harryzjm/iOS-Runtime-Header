//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class FBSSceneSettings, FBSSceneTransitionContext;

@interface FBProcessWatchdogEventContext : NSObject
{
    long long _event;
    FBSSceneSettings *_sceneSettings;
    FBSSceneTransitionContext *_sceneTransitionContext;
}

+ (id)contextForEvent:(long long)arg1 settings:(id)arg2 transitionContext:(id)arg3;
@property(readonly, nonatomic) FBSSceneTransitionContext *sceneTransitionContext; // @synthesize sceneTransitionContext=_sceneTransitionContext;
@property(readonly, nonatomic) FBSSceneSettings *sceneSettings; // @synthesize sceneSettings=_sceneSettings;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;

@end

