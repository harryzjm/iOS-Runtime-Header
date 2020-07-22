//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MKViewWithHairline : UIView
{
    UIView *_bottomHairline;
    UIView *_topHairline;
    UIColor *_hairlineColor;
    double _leftHairlineInset;
    double _rightHairlineInset;
}

@property(nonatomic) double rightHairlineInset; // @synthesize rightHairlineInset=_rightHairlineInset;
@property(nonatomic) double leftHairlineInset; // @synthesize leftHairlineInset=_leftHairlineInset;
@property(retain, nonatomic) UIColor *hairlineColor; // @synthesize hairlineColor=_hairlineColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic, getter=isBottomHairlineHidden) _Bool bottomHairlineHidden;
@property(nonatomic, getter=isTopHairlineHidden) _Bool topHairlineHidden;
- (id)initWithFrame:(struct CGRect)arg1;

@end

