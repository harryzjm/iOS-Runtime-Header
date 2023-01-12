//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, PHASEEngine;

@interface PHASEDucker : NSObject
{
    PHASEEngine *_engine;
    NSSet *_sourceGroups;
    NSSet *_targetGroups;
    _Bool _active;
    double _gain;
    double _attackTime;
    double _releaseTime;
    long long _attackCurve;
    long long _releaseCurve;
    NSString *_identifier;
    double _gainHighFrequency;
    double _gainLowFrequency;
    NSString *_uid;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) double gainLowFrequency; // @synthesize gainLowFrequency=_gainLowFrequency;
@property(readonly, nonatomic) double gainHighFrequency; // @synthesize gainHighFrequency=_gainHighFrequency;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long releaseCurve; // @synthesize releaseCurve=_releaseCurve;
@property(readonly, nonatomic) long long attackCurve; // @synthesize attackCurve=_attackCurve;
@property(readonly, nonatomic) double releaseTime; // @synthesize releaseTime=_releaseTime;
@property(readonly, nonatomic) double attackTime; // @synthesize attackTime=_attackTime;
@property(readonly, nonatomic) double gain; // @synthesize gain=_gain;
@property(readonly, getter=isActive) _Bool active;
- (void)deactivate;
- (void)activate;
@property(readonly, copy, nonatomic) NSSet *targetGroups;
@property(readonly, copy, nonatomic) NSSet *sourceGroups;
- (id)initWithEngine:(id)arg1 sourceGroups:(id)arg2 targetGroups:(id)arg3 gain:(double)arg4 gainHighFrequency:(double)arg5 gainLowFrequency:(double)arg6 attackTime:(double)arg7 releaseTime:(double)arg8 attackCurve:(long long)arg9 releaseCurve:(long long)arg10;
- (id)initWithEngine:(id)arg1 sourceGroups:(id)arg2 targetGroups:(id)arg3 gain:(double)arg4 lowFrequencyGain:(double)arg5 highFrequencyGain:(double)arg6 attackTime:(double)arg7 releaseTime:(double)arg8 attackCurve:(long long)arg9 releaseCurve:(long long)arg10;
- (id)initWithEngine:(id)arg1 sourceGroups:(id)arg2 targetGroups:(id)arg3 gain:(double)arg4 attackTime:(double)arg5 releaseTime:(double)arg6 attackCurve:(long long)arg7 releaseCurve:(long long)arg8;
- (id)init;

@end
