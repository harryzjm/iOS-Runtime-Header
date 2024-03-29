//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactCell.h"

@class NSDictionary, NSString, UIImageView, UILabel, UIView;
@protocol ABText;

__attribute__((visibility("hidden")))
@interface CNLabeledCell : CNContactCell
{
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
    _Bool _labelViewNeedsHuggingContent;
    _Bool _valueViewNeedsHuggingContent;
    UIImageView *_chevron;
}

+ (_Bool)wantsHorizontalLayout;
+ (_Bool)wantsStandardConstraints;
+ (_Bool)wantsChevron;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(nonatomic) _Bool valueViewNeedsHuggingContent; // @synthesize valueViewNeedsHuggingContent=_valueViewNeedsHuggingContent;
@property(nonatomic) _Bool labelViewNeedsHuggingContent; // @synthesize labelViewNeedsHuggingContent=_labelViewNeedsHuggingContent;
- (void)tintColorDidChange;
@property(copy, nonatomic) NSDictionary *valueTextAttributes;
@property(copy, nonatomic) NSDictionary *labelTextAttributes;
@property(readonly, nonatomic) NSString *valueString;
@property(readonly, nonatomic) NSString *labelString;
@property(readonly, nonatomic) UILabel *standardValueView;
@property(readonly, nonatomic) UILabel *standardLabelView;
@property(readonly, nonatomic) UIView *rightMostView;
@property(readonly, nonatomic) UIView<ABText> *valueView;
@property(readonly, nonatomic) UIView<ABText> *labelView;
- (id)variableConstraintsForHorizontalLayout;
- (id)constantConstraintsForHorizontalLayout;
- (id)variableConstraintsForVerticalLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)variableConstraintsForStandardLayout;
- (id)constantConstraintsForStandardLayout;
- (id)variableConstraints;
- (id)constantConstraints;
@property(readonly, nonatomic) double valueViewBottomMargin;
@property(readonly, nonatomic) double chevronWidth;
- (double)minCellHeight;
- (void)removeChevron;
- (void)addChevron;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)displaysCellSelectionState;
- (_Bool)allowsCellSelection;

@end

