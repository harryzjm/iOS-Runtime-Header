//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBUIMetricRepresentation;

@interface IBUISimulatedNavigationBarOverrideMetricChain
{
    _Bool _forcePrompt;
    IBUIMetricRepresentation *_navigationBar;
}

@property(readonly, nonatomic) _Bool forcePrompt; // @synthesize forcePrompt=_forcePrompt;
@property(readonly, nonatomic) IBUIMetricRepresentation *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithNavigationBar:(id)arg1 forcePrompt:(_Bool)arg2 precedingMetric:(id)arg3;

@end

