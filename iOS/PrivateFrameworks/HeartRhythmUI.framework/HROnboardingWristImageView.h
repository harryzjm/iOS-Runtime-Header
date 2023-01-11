//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HRElectrocardiogramSessionSimulationView, UIImageView;

@interface HROnboardingWristImageView : UIView
{
    UIImageView *_backgroundImageView;
    HRElectrocardiogramSessionSimulationView *_screenView;
}

@property(readonly, nonatomic) HRElectrocardiogramSessionSimulationView *screenView; // @synthesize screenView=_screenView;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)setTimeRemaining:(double)arg1;
- (void)setUpUI;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
