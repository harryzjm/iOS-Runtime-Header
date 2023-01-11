//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MXMInstrument, NSDate, NSString;

@interface MXMOSSignpostMetric
{
    NSDate *_startDate;
    NSDate *_stopDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)initWithSubsystem:(id)arg1;
- (id)init;
- (id)_constructProbe;
- (_Bool)_shouldNeverWrapInProxy;
- (_Bool)_shouldAlwaysWrapInProxy;
- (_Bool)_shouldConstructProbe;
- (unsigned long long)_sampleMode;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subsystem;

// Remaining properties
@property(readonly, copy, nonatomic) MXMInstrument *instrument; // @dynamic instrument;

@end
