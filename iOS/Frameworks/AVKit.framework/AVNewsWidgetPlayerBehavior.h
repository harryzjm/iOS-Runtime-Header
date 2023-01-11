//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehavior-Protocol.h>
#import <AVKit/AVBehaviorInternal-Protocol.h>

@class AVNewsWidgetPlayerBehaviorContext, NSString;

@interface AVNewsWidgetPlayerBehavior : NSObject <AVBehaviorInternal, AVBehavior>
{
    AVNewsWidgetPlayerBehaviorContext *_behaviorContext;
}

+ (Class)behaviorContextClass;
@property(nonatomic) __weak AVNewsWidgetPlayerBehaviorContext *behaviorContext; // @synthesize behaviorContext=_behaviorContext;
- (void).cxx_destruct;
- (void)didCancelContentTransition;
- (void)willCancelContentTransition;
- (void)didCompleteContentTransition;
- (void)willCompleteContentTransition;
- (void)didUpdateContentTransitionProgress:(double)arg1;
- (void)willBeginContentTransition;
- (id)playerForContentTransitionType:(long long)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;
- (void)didMoveToContext:(id)arg1;
- (void)willMoveToContext:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
