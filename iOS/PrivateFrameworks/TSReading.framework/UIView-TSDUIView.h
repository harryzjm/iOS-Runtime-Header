//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface UIView (TSDUIView)
@property(copy, nonatomic) UIColor *tsdBackgroundColor;
@property(nonatomic) double tsdAlpha;
- (id)ts_windowForView;
- (id)childAtPoint:(struct CGPoint)arg1;
- (void)translateToView:(id)arg1 belowSubview:(id)arg2;
- (void)translateToView:(id)arg1 aboveSubview:(id)arg2;
- (void)translateToView:(id)arg1;
- (void)translateAndScaleToView:(id)arg1 belowSubview:(id)arg2;
- (void)translateAndScaleToView:(id)arg1 aboveSubview:(id)arg2;
- (void)translateAndScaleToView:(id)arg1;
- (void)p_translateToView:(id)arg1 above:(_Bool)arg2 siblingView:(id)arg3 shouldScale:(_Bool)arg4;
@end

