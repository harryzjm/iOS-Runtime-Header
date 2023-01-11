//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IBUISimulatedSplitViewMetricChain
{
    long long _splitViewDestination;
}

@property(readonly, nonatomic) long long splitViewDestination; // @synthesize splitViewDestination=_splitViewDestination;
- (id)singleLinkPrettyDescription;
- (id)copyWithPrecedingMetric:(id)arg1;
- (_Bool)isEqualToMetricChain:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithDestination:(long long)arg1 precedingMetric:(id)arg2;
- (id)createWindowForViewController:(id)arg1 initialSize:(id)arg2 inContext:(id)arg3;

@end

