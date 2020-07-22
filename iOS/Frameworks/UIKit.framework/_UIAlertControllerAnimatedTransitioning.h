//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIAlertController, UIInteractionProgress;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presentation;
    UIAlertController *_alertController;
    UIInteractionProgress *_interactionProgress;
}

@property(retain, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(getter=isPresentation) _Bool presentation; // @synthesize presentation=_presentation;
- (void).cxx_destruct;
- (void)_animateTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)_alertControllerForContext:(id)arg1;
- (id)initWithInteractionProgress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

