//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface UIKBASPCoverView : UIView
{
    CAGradientLayer *_gradientLayer;
}

+ (id)ASPCoverViewColor;
+ (id)ASPCoverView:(_Bool)arg1 withFrame:(struct CGRect)arg2 isRightToLeft:(_Bool)arg3 withTextWidth:(double)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)layoutSubviews;
- (id)initCoverViewWithFrame:(struct CGRect)arg1 isRightToLeft:(_Bool)arg2 withTextWidth:(double)arg3;
- (id)initCoverBackgroundViewWithFrame:(struct CGRect)arg1 isRightToLeft:(_Bool)arg2;

@end

