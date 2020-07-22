//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicFactoidView
{
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    _MKUILabel *_keyLabel;
    _MKUILabel *_valueLabel;
}

@property(retain, nonatomic) _MKUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) _MKUILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)setUpConstraints;
- (id)_valueLabelWithString:(id)arg1;
- (id)_keyLabelWithString:(id)arg1;
- (id)initWithTextItem:(id)arg1;

@end
