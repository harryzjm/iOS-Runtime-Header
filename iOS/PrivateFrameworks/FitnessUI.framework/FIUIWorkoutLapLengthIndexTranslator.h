//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKUnit;

@interface FIUIWorkoutLapLengthIndexTranslator : NSObject
{
    HKUnit *_distanceUnit;
}

@property(retain, nonatomic) HKUnit *distanceUnit; // @synthesize distanceUnit=_distanceUnit;
- (void).cxx_destruct;
- (long long)indexForValue:(double)arg1;
- (double)valueForIndex:(long long)arg1;
- (double)valueTranslatedFromDistanceUnit:(double)arg1;
- (double)valueTranslatedIntoDistanceUnit:(double)arg1;
- (id)initWithDistanceUnit:(id)arg1;

@end
