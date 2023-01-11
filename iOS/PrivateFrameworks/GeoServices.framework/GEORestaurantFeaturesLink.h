//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDRestaurantReservationLink, NSArray, NSMapTable;

@interface GEORestaurantFeaturesLink : NSObject
{
    GEOPDRestaurantReservationLink *_restaurantReservationLink;
    NSMapTable *_attributionMap;
}

@property(retain, nonatomic) GEOPDRestaurantReservationLink *restaurantReservationLink; // @synthesize restaurantReservationLink=_restaurantReservationLink;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *featureTypes;
- (unsigned long long)extensionModeForVendorID:(id)arg1;
- (id)displayNameForVendorID:(id)arg1;
- (id)applicationsForVendorID:(id)arg1;
@property(readonly, nonatomic) NSArray *featureProviders;
@property(readonly, nonatomic) _Bool hasFeatures;
- (id)initWithRestaurantReservationLink:(id)arg1 attributionMap:(id)arg2;

@end

