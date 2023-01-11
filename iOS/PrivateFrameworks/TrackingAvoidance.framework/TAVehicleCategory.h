//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface TAVehicleCategory : NSObject
{
    NSDate *_date;
    unsigned long long _vehicleCategoryType;
}

+ (unsigned long long)speculateTAVehicleCategoryTypeFromGeoNavigationNotification:(id)arg1;
+ (unsigned long long)speculateTAVehicleCategoryTypeFromVehicleStateNotification:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long vehicleCategoryType; // @synthesize vehicleCategoryType=_vehicleCategoryType;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithTAGeoNavigationNotification:(id)arg1;
- (id)initWithTAVehicularStateNotification:(id)arg1;
- (id)initWithVehicleCategoryType:(unsigned long long)arg1 andDate:(id)arg2;

@end
