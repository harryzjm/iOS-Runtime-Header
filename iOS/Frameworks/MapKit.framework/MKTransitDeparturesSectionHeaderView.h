//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKCustomSeparatorCell.h"

@class MKButtonWithTargetArgument, NSLayoutConstraint, NSString, NSTimer, UIActivityIndicatorView, UIStackView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorCell
{
    unsigned long long _type;
    _Bool _extraSpacing;
    _MKUILabel *_label;
    UIStackView *_updatingView;
    _MKUILabel *_updatingLabel;
    NSTimer *_updatingLabelTimestampRefreshTimer;
    NSTimer *_updatingViewRefreshTimer;
    UIActivityIndicatorView *_updatingSpinner;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    MKButtonWithTargetArgument *_button;
}

+ (id)_buttonFont:(unsigned long long)arg1;
+ (id)_font:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MKButtonWithTargetArgument *button; // @synthesize button=_button;
@property(copy, nonatomic) NSString *text;
- (void)_updateConstraintValues;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (void)tintColorDidChange;
- (id)_initWithType:(unsigned long long)arg1 extraSpacing:(_Bool)arg2 reuseIdentifier:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 extraSpacing:(_Bool)arg2 reuseIdentifier:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 extraSpacing:(_Bool)arg2;

@end

