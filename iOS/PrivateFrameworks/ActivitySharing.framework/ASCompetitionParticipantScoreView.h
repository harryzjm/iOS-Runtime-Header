//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ASCompetitionScoreViewConfiguration, NSNumber, NSString, UIColor, UILabel;

@interface ASCompetitionParticipantScoreView : UIView
{
    ASCompetitionScoreViewConfiguration *_configuration;
    UILabel *_nameLabel;
    UILabel *_primaryScoreLabel;
    UILabel *_secondaryScoreLabel;
    NSNumber *_previousLayoutWidth;
    _Bool _secondaryScoreEnabled;
    NSString *_name;
    double _nameFontSizeReduction;
    unsigned long long _primaryScore;
    double _primaryScoreFontSizeReduction;
    unsigned long long _secondaryScore;
    UIColor *_scoreColor;
    double _scoreLeftMargin;
    double _scoreRightMargin;
}

@property(nonatomic) double scoreRightMargin; // @synthesize scoreRightMargin=_scoreRightMargin;
@property(nonatomic) double scoreLeftMargin; // @synthesize scoreLeftMargin=_scoreLeftMargin;
@property(nonatomic) _Bool secondaryScoreEnabled; // @synthesize secondaryScoreEnabled=_secondaryScoreEnabled;
@property(retain, nonatomic) UIColor *scoreColor; // @synthesize scoreColor=_scoreColor;
@property(nonatomic) unsigned long long secondaryScore; // @synthesize secondaryScore=_secondaryScore;
@property(nonatomic) double primaryScoreFontSizeReduction; // @synthesize primaryScoreFontSizeReduction=_primaryScoreFontSizeReduction;
@property(nonatomic) unsigned long long primaryScore; // @synthesize primaryScore=_primaryScore;
@property(nonatomic) double nameFontSizeReduction; // @synthesize nameFontSizeReduction=_nameFontSizeReduction;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_updateSecondaryScoreLabel;
- (void)_updatePrimaryScoreLabelWithFontSizeReduction:(double)arg1;
- (void)_updateNameLabelWithFontSizeReduction:(double)arg1;
- (double)_availableScoreWidthForWidth:(double)arg1;
- (double)_computeFontSizeReductionForLabel:(id)arg1 width:(double)arg2 maxReduction:(double)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (double)computeNameFontSizeReductionForWidth:(double)arg1;
- (double)computePrimaryScoreFontSizeReductionForWidth:(double)arg1;
@property(readonly, nonatomic) double nameBaselineY;
- (void)layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

