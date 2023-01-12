//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (MapsUI)
+ (void)_mapsui_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_addHairlineAtBottom:(_Bool)arg1 leadingMargin:(double)arg2 trailingMargin:(double)arg3;
- (id)_mapsui_addHairlineAtBottomWithLeadingMargin:(double)arg1 trailingMargin:(double)arg2;
- (id)_mapsui_addHairlineAtBottomWithMargin:(double)arg1;
- (id)_mapsui_addHairlineAtTopWithLeadingMargin:(double)arg1 trailingMargin:(double)arg2;
- (id)_mapsui_addHairlineAtTopWithMargin:(double)arg1;
- (_Bool)_mapsui_isRTL;
- (void)_mapsui_addSelectGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_mapsui_performImageLoadingTransitionWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_mapsui_setBackgroundColor:(id)arg1;
- (void)_mapsui_setCardCorner;
- (void)_mapsui_layoutIfNeeded;
- (struct CGSize)_mapsui_fittingSize;
- (void)_mapsui_disableTranslatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) NSString *_mapsui_preservedLayoutMarginsDescription;
@property(readonly, nonatomic) NSString *_mapsui_layoutMarginsDescription;
- (void)_mapsui_resetLayoutMarginsWithPreservesSuperview:(_Bool)arg1 insetsFromSafeArea:(_Bool)arg2;
- (void)_mapsui_resetLayoutMarginsWithPreservesSuperview:(_Bool)arg1;
- (void)_mapsui_resetLayoutMargins;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

