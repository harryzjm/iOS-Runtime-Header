//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface WATodayHourlyForecastView : UIView
{
    UIVisualEffectView *_temperatureLabelVisualEffectView;
    UIVisualEffectView *_timeLabelVisualEffectView;
    UILabel *_temperatureLabel;
    UILabel *_timeLabel;
    UIImageView *_conditionsImageView;
    NSArray *_constraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIImageView *conditionsImageView; // @synthesize conditionsImageView=_conditionsImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property(retain, nonatomic) UIVisualEffectView *timeLabelVisualEffectView; // @synthesize timeLabelVisualEffectView=_timeLabelVisualEffectView;
@property(retain, nonatomic) UIVisualEffectView *temperatureLabelVisualEffectView; // @synthesize temperatureLabelVisualEffectView=_temperatureLabelVisualEffectView;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)applyVibrancyToTimeWithEffect:(id)arg1;
@property(retain, nonatomic) UIImage *conditionsImage;
@property(copy, nonatomic) NSAttributedString *time;
@property(copy, nonatomic) NSAttributedString *temperature;
- (id)initWithFrame:(struct CGRect)arg1;

@end

