//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MTMaterialView, UIColor;

@interface CSPasscodeBackgroundView : UIView
{
    UIColor *_reduceTransparencyBackingColor;
    MTMaterialView *_materialView;
    UIView *_lightenSourceOverView;
    UIView *_plusDView;
    UIView *_reduceTransparencyTintingView;
    UIView *_reduceTransparencyBackingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *reduceTransparencyBackingView; // @synthesize reduceTransparencyBackingView=_reduceTransparencyBackingView;
@property(retain, nonatomic) UIView *reduceTransparencyTintingView; // @synthesize reduceTransparencyTintingView=_reduceTransparencyTintingView;
@property(retain, nonatomic) UIView *plusDView; // @synthesize plusDView=_plusDView;
@property(retain, nonatomic) UIView *lightenSourceOverView; // @synthesize lightenSourceOverView=_lightenSourceOverView;
@property(retain, nonatomic) MTMaterialView *materialView; // @synthesize materialView=_materialView;
@property(retain, nonatomic) UIColor *reduceTransparencyBackingColor; // @synthesize reduceTransparencyBackingColor=_reduceTransparencyBackingColor;
- (void)_setPlusDBackgroundColorWithWeighting:(double)arg1;
- (void)setWeighting:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
