//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNGeminiBadge, CNGeminiResult, NSArray, NSDictionary, UIColor, UIImageView, UILabel, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface CNContactGeminiView : UIView
{
    _Bool _allowsPickerActions;
    _Bool _highlighted;
    _Bool _didCalculateLayout;
    _Bool _isUsingTwoLineLayout;
    CNGeminiResult *_geminiResult;
    UIColor *_highlightedColor;
    NSDictionary *_ab_textAttributes;
    UILayoutGuide *_layoutGuide;
    UILayoutGuide *_geminiLabelLayoutGuide;
    CNGeminiBadge *_geminiBadge;
    UILabel *_typeLabel;
    UILabel *_geminiLabel;
    UIImageView *_chevronView;
    NSArray *_activatedConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(nonatomic) _Bool isUsingTwoLineLayout; // @synthesize isUsingTwoLineLayout=_isUsingTwoLineLayout;
@property(nonatomic) _Bool didCalculateLayout; // @synthesize didCalculateLayout=_didCalculateLayout;
@property(retain, nonatomic) NSArray *activatedConstraints; // @synthesize activatedConstraints=_activatedConstraints;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *geminiLabel; // @synthesize geminiLabel=_geminiLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) CNGeminiBadge *geminiBadge; // @synthesize geminiBadge=_geminiBadge;
@property(retain, nonatomic) UILayoutGuide *geminiLabelLayoutGuide; // @synthesize geminiLabelLayoutGuide=_geminiLabelLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(copy, nonatomic) NSDictionary *ab_textAttributes; // @synthesize ab_textAttributes=_ab_textAttributes;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
@property(nonatomic) _Bool allowsPickerActions; // @synthesize allowsPickerActions=_allowsPickerActions;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (_Bool)_hasBaseline;
- (id)localizedLabelFromGeminiResult:(id)arg1;
- (id)localizedChannelUsageFromGeminiResult:(id)arg1;
- (id)twoLineLayoutConstraints;
- (id)singleLineLayoutConstraints;
- (void)updateConstraints;
- (_Bool)doesLayoutRequireTwoLines;
- (void)layoutSubviews;
- (void)calculateLayoutIfNeeded;
- (void)setNeedsCalculateLayout;
- (_Bool)shouldDisplayChevron;
- (_Bool)shouldDisplayBadge;
- (struct CGSize)sizeForTwoLineLayoutFittingSize:(struct CGSize)arg1;
- (struct CGSize)sizeForSingleLineLayoutFittingSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
