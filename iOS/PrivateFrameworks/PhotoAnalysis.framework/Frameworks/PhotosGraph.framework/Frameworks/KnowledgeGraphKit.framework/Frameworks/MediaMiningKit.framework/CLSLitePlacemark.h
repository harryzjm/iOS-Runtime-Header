//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSSecureCoding-Protocol.h>

@class CLCircularRegion, CLLocation, NSArray, NSString;

@interface CLSLitePlacemark : NSObject <NSSecureCoding>
{
    _Bool _isIsland;
    CLCircularRegion *_region;
    CLLocation *_location;
    NSString *_thoroughfare;
    NSString *_subThoroughfare;
    NSString *_locality;
    NSString *_subLocality;
    NSString *_administrativeArea;
    NSString *_subAdministrativeArea;
    NSString *_ISOcountryCode;
    NSString *_inlandWater;
    NSString *_ocean;
    NSArray *_areasOfInterest;
    NSString *_administrativeAreaCode;
}

+ (_Bool)_isIslandForGeoMapItem:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)litePlacemarkFromCLPlacemark:(id)arg1;
@property(nonatomic) _Bool isIsland; // @synthesize isIsland=_isIsland;
@property(retain, nonatomic) NSString *administrativeAreaCode; // @synthesize administrativeAreaCode=_administrativeAreaCode;
@property(retain, nonatomic) NSArray *areasOfInterest; // @synthesize areasOfInterest=_areasOfInterest;
@property(retain, nonatomic) NSString *ocean; // @synthesize ocean=_ocean;
@property(retain, nonatomic) NSString *inlandWater; // @synthesize inlandWater=_inlandWater;
@property(retain, nonatomic) NSString *ISOcountryCode; // @synthesize ISOcountryCode=_ISOcountryCode;
@property(retain, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property(retain, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)_extractValuesFromGeoMapItem:(id)arg1;
@property(readonly, nonatomic) _Bool isOcean;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRTMapItem:(id)arg1;
- (id)initWithCLPlacemark:(id)arg1;

@end

