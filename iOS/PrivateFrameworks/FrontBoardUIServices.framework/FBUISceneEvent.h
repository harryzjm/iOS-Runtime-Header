//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext;

@interface FBUISceneEvent : NSObject
{
    FBSSceneTransitionContext *_transitionContext;
    CDUnknownBlockType _sender;
    _Bool _sent;
}

@property(readonly, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (void)sendWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)send;
- (void)dealloc;
- (id)initWithTransitionContext:(id)arg1 sender:(CDUnknownBlockType)arg2;

@end

