//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkDoubleQueueReorder
{
    double _probability;
    double _correlation;
    _Bool _useMarkovModel;
    int _reorderGap;
    int _gap;
    int _state;
}

- (void)push:(id)arg1;
- (_Bool)shouldSendPacketImmediatelyMM;
- (void)dealloc;
- (id)initWithPolicies:(id)arg1;

@end
