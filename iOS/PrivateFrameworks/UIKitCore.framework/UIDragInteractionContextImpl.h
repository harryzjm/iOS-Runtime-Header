//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragAnimating-Protocol.h>
#import <UIKitCore/UIDragInteractionContext-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIDragInteractionContextImpl : NSObject <UIDragInteractionContext, UIDragAnimating>
{
    _Bool _shouldAnimateLift;
    _Bool _preparedForLift;
    _Bool _accessibilityDrag;
    _Bool _hasBegunDrag;
    NSMutableArray *_animationBlocks;
    NSMutableArray *_completionBlocks;
    long long _state;
    NSArray *_items;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
    UIDelayedAction *_gateTimer;
    UIDelayedAction *_cancellationTimer;
    struct CGPoint _initialLocation;
}

@property(retain, nonatomic) UIDelayedAction *cancellationTimer; // @synthesize cancellationTimer=_cancellationTimer;
@property(retain, nonatomic) UIDelayedAction *gateTimer; // @synthesize gateTimer=_gateTimer;
@property(nonatomic) _Bool hasBegunDrag; // @synthesize hasBegunDrag=_hasBegunDrag;
@property(nonatomic, getter=isAccessibilityDrag) _Bool accessibilityDrag; // @synthesize accessibilityDrag=_accessibilityDrag;
@property(nonatomic, getter=isPreparedForLift) _Bool preparedForLift; // @synthesize preparedForLift=_preparedForLift;
@property(nonatomic) struct CGPoint initialLocation; // @synthesize initialLocation=_initialLocation;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(nonatomic) _Bool shouldAnimateLift; // @synthesize shouldAnimateLift=_shouldAnimateLift;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)_api_addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSMutableArray *animationBlocks; // @synthesize animationBlocks=_animationBlocks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
