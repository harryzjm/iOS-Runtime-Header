//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, TAFilterVisitsSettings;

@interface TAFilterSingleVisitSettings : NSObject
{
    double _thresholdOfSignificantDuration;
    double _thresholdOfSignificantDistance;
    TAFilterVisitsSettings *_visitsSettings;
    NSSet *_enabledLoiTypes;
}

+ (id)defaultSingleVisitEnabledLoiTypes;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *enabledLoiTypes; // @synthesize enabledLoiTypes=_enabledLoiTypes;
@property(readonly, nonatomic) TAFilterVisitsSettings *visitsSettings; // @synthesize visitsSettings=_visitsSettings;
@property(readonly, nonatomic) double thresholdOfSignificantDistance; // @synthesize thresholdOfSignificantDistance=_thresholdOfSignificantDistance;
@property(readonly, nonatomic) double thresholdOfSignificantDuration; // @synthesize thresholdOfSignificantDuration=_thresholdOfSignificantDuration;
- (id)enabledLoiTypesToString;
- (id)initWithDefaults;
- (id)initWithThresholdOfSignificantDurationOrDefault:(id)arg1 thresholdOfSignificantDistanceOrDefault:(id)arg2 filterVisitsSettingsOrDefault:(id)arg3 enabledLoiTypesOrDefault:(id)arg4;
- (id)initWithThresholdOfSignificantDuration:(double)arg1 thresholdOfSignificantDistance:(double)arg2 filterVisitsSettings:(id)arg3 enabledLoiTypes:(id)arg4;

@end
