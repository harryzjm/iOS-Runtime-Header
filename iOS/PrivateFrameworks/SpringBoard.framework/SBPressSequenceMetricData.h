//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSUUID;

@interface SBPressSequenceMetricData
{
    _Bool _didTriggerSOS;
    NSString *_pressName;
    NSArray *_pressSequence;
    unsigned long long _clickMax;
    NSUUID *_sosTriggerUUID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *sosTriggerUUID; // @synthesize sosTriggerUUID=_sosTriggerUUID;
@property(nonatomic) unsigned long long clickMax; // @synthesize clickMax=_clickMax;
@property(nonatomic) _Bool didTriggerSOS; // @synthesize didTriggerSOS=_didTriggerSOS;
@property(copy, nonatomic) NSArray *pressSequence; // @synthesize pressSequence=_pressSequence;
@property(copy, nonatomic) NSString *pressName; // @synthesize pressName=_pressName;

@end
