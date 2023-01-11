//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface VKVenueBuildingFeatureMarker
{
    _Bool _localize;
}

- (CDStruct_c3b9c2ee)nearestFramingPositionToLocation:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) NSDictionary *floorNames;
@property(readonly, nonatomic) NSDictionary *shortFloorNames;
@property(readonly, nonatomic) NSArray *floorOrdinals;
@property(readonly, nonatomic) unsigned long long businessId;
@property(readonly, nonatomic) unsigned long long buildingId;
- (const shared_ptr_ec62a932 *)venueBuildingFeatureMarker;
- (id)initWithVenueBuilding:(const struct VenueBuilding *)arg1 localize:(_Bool)arg2;

@end
