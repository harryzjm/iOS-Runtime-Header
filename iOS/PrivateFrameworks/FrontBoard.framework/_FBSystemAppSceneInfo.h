//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSScene, FBSSceneTransitionContext;

@interface _FBSystemAppSceneInfo : NSObject
{
    _Bool _hasSentFBSWorkspaceDelegateSceneCreate;
    FBSScene *_FBSScene;
    FBSSceneTransitionContext *_pendingTransitionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBSSceneTransitionContext *pendingTransitionContext; // @synthesize pendingTransitionContext=_pendingTransitionContext;
@property(nonatomic) _Bool hasSentFBSWorkspaceDelegateSceneCreate; // @synthesize hasSentFBSWorkspaceDelegateSceneCreate=_hasSentFBSWorkspaceDelegateSceneCreate;
@property(retain, nonatomic) FBSScene *FBSScene; // @synthesize FBSScene=_FBSScene;

@end
