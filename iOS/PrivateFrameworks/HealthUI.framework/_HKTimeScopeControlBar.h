//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISegmentedControl;

@interface _HKTimeScopeControlBar
{
    UISegmentedControl *_segments;
}

- (void).cxx_destruct;
- (void)_segmentValueChanged:(id)arg1;
- (void)setSelectedTimeScope:(long long)arg1;
- (long long)selectedTimeScope;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(_Bool)arg3;

@end
