//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitAttributionSummaryCell
{
    _MKUILabel *_attributionLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)tintColorDidChange;
- (void)_updateConstraintValues;
- (id)_moreString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(copy, nonatomic) NSString *attributionSummary;

@end
