//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIImage, UIImageView, WALegibilityLabel, WATodayPadViewStyle, _UILegibilitySettings;

@interface WATodayPadView : UIView
{
    WATodayPadViewStyle *_style;
    NSArray *_constraints;
    UIImageView *_conditionsImageView;
    WALegibilityLabel *_temperatureLabel;
    WALegibilityLabel *_locationLabel;
    WALegibilityLabel *_conditionsLabel;
    _UILegibilitySettings *_legibilitySettings;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) WALegibilityLabel *conditionsLabel; // @synthesize conditionsLabel=_conditionsLabel;
@property(retain, nonatomic) WALegibilityLabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) WALegibilityLabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property(retain, nonatomic) UIImageView *conditionsImageView; // @synthesize conditionsImageView=_conditionsImageView;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(copy, nonatomic) WATodayPadViewStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_setupConstraintsForViews;
- (void)updateForChangedSettings:(id)arg1;
@property(copy, nonatomic) UIImage *conditionsImage;
@property(copy, nonatomic) NSString *conditionsLine;
@property(copy, nonatomic) NSString *locationName;
@property(copy, nonatomic) NSString *temperature;
- (void)sizeToFit;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

