//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RBSRunningReasonAttribute
{
    unsigned long long _runningReason;
}

+ (id)withReason:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long runningReason; // @synthesize runningReason=_runningReason;
- (id)_initWithReason:(unsigned long long)arg1;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;

@end
