//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UICircleProgressView : UIView
{
}

+ (Class)layerClass;
- (double)progressPresentationValue;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double progress;
@property(nonatomic) _Bool showProgressTray;
@property(nonatomic) double progressLineWidth;
@property(readonly, nonatomic) UIColor *progressColor;
- (void)setProgressColor:(id)arg1;
@property(nonatomic) long long progressStartPoint;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

