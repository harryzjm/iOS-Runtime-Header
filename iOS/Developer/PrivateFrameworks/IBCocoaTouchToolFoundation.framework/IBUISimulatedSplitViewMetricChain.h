//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBUIMetricRepresentation;

@interface IBUISimulatedSplitViewMetricChain
{
    IBUIMetricRepresentation *_splitViewController;
    long long _effectiveStyle;
    long long _column;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long column; // @synthesize column=_column;
@property(readonly, nonatomic) long long effectiveStyle; // @synthesize effectiveStyle=_effectiveStyle;
@property(readonly, nonatomic) IBUIMetricRepresentation *splitViewController; // @synthesize splitViewController=_splitViewController;
- (id)singleLinkPrettyDescription;
- (id)copyWithPrecedingMetric:(id)arg1;
- (_Bool)isEqualToMetricChain:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithSplitViewController:(id)arg1 effectiveStyle:(long long)arg2 column:(long long)arg3 precedingMetric:(id)arg4;
- (id)createWindowForViewController:(id)arg1 initialSize:(id)arg2 inContext:(id)arg3;

@end

