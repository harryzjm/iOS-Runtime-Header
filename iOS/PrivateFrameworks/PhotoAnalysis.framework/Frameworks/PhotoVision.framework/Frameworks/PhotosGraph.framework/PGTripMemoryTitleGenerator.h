//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGTripMemoryTitleGenerator
{
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_typeString;
- (_Bool)_triggerDefaultTitleGenerationIfNil;
- (id)_timeTitleForTripAndWeekend;
- (id)_timeTitleForWeekend;
- (id)_timeTitleForTrip;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 type:(unsigned long long)arg2;

@end

