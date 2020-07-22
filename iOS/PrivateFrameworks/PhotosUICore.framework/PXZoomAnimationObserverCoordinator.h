//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PXZoomAnimationObserverCoordinatorDelegate;

@interface PXZoomAnimationObserverCoordinator
{
    struct {
        _Bool animationWillBeginWithContext;
        _Bool animationDidEndWithContext;
    } _delegateRespondsTo;
    id <PXZoomAnimationObserverCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <PXZoomAnimationObserverCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;

@end

