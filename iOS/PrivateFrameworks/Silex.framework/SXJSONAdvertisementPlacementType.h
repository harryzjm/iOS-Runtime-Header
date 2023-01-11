//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXAdvertisementPlacementType-Protocol.h>

@class NSString;
@protocol SXAutoPlacementLayout;

@interface SXJSONAdvertisementPlacementType <SXAdvertisementPlacementType>
{
}

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
@property(readonly, copy) NSString *description;
- (unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long bannerType; // @dynamic bannerType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) struct _SXConvertibleValue distanceFromMedia; // @dynamic distanceFromMedia;
@property(readonly, nonatomic) _Bool enabled; // @dynamic enabled;
@property(readonly, nonatomic) unsigned long long frequency; // @dynamic frequency;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <SXAutoPlacementLayout> layout; // @dynamic layout;
@property(readonly) Class superclass;

@end

