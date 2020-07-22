//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SXAutoLayoutLabel;

@interface SXSkipButton
{
    unsigned long long _threshold;
    SXAutoLayoutLabel *_skipInLabel;
    SXAutoLayoutLabel *_thresholdLabel;
}

@property(retain, nonatomic) SXAutoLayoutLabel *thresholdLabel; // @synthesize thresholdLabel=_thresholdLabel;
@property(retain, nonatomic) SXAutoLayoutLabel *skipInLabel; // @synthesize skipInLabel=_skipInLabel;
@property(nonatomic) unsigned long long threshold; // @synthesize threshold=_threshold;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

