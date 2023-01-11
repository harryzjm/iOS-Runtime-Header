//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAccessoryItemTransitioning-Protocol.h>

@class NSString, UIViewPropertyAnimator;

@interface SVVideoAccessoryItemCrossfadeTransitionCoordinator : NSObject <SVVideoAccessoryItemTransitioning>
{
    UIViewPropertyAnimator *_fadeInAnimator;
    UIViewPropertyAnimator *_fadeOutAnimator;
}

@property(retain, nonatomic) UIViewPropertyAnimator *fadeOutAnimator; // @synthesize fadeOutAnimator=_fadeOutAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *fadeInAnimator; // @synthesize fadeInAnimator=_fadeInAnimator;
- (void).cxx_destruct;
- (void)cancelTransition;
- (void)animateWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

