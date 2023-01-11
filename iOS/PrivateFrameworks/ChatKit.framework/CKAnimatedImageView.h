//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>

@class CKAnimatedImage, NSArray, NSString;

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver>
{
    _Bool _automaticallyObserveWindowForAnimationTimer;
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
}

@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(nonatomic) _Bool automaticallyObserveWindowForAnimationTimer; // @synthesize automaticallyObserveWindowForAnimationTimer=_automaticallyObserveWindowForAnimationTimer;
@property(retain, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void).cxx_destruct;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)updateAnimationTimerObserving;
- (void)didMoveToWindow;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

