//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STUsageGraphView, UILabel;

@interface STMostUsedGraphCell
{
    UILabel *_screenTimeLabel;
    STUsageGraphView *_usageGraphView;
}

@property(readonly, nonatomic) STUsageGraphView *usageGraphView; // @synthesize usageGraphView=_usageGraphView;
@property(readonly, nonatomic) UILabel *screenTimeLabel; // @synthesize screenTimeLabel=_screenTimeLabel;
- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
