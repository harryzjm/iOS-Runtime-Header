//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CalendarFoundation/NSSecureCoding-Protocol.h>

@class CLLocation, CLPlacemark, NSData, NSString;

@interface CalLocation : NSObject <NSSecureCoding>
{
    CLLocation *_location;
    NSString *_address;
    NSString *_title;
    NSString *_displayName;
    NSString *_abURLString;
    CLPlacemark *_placemark;
    NSData *_mapKitHandle;
    _Bool _isCurrentLocation;
    double _radius;
    NSString *_routeType;
    int _type;
}

+ (long long)routingModeEnumForCalRouteType:(id)arg1;
+ (id)routeTypeStringForCalLocationRoutingMode:(long long)arg1;
+ (id)displayStringForAddress:(id)arg1 withoutTitle:(id)arg2;
+ (id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2;
+ (id)coordinatesFromGeoURLString:(id)arg1;
+ (id)geoURLStringFromCoordinates:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property(copy) NSString *routeType; // @synthesize routeType=_routeType;
@property int type; // @synthesize type=_type;
@property(retain) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(copy) NSString *abURLString; // @synthesize abURLString=_abURLString;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)geoURLString;
- (id)fullTitleAndAddressString;
- (id)displayString;
@property(readonly, nonatomic) _Bool isCurrentLocation;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (id)typeString;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(copy, nonatomic) CLLocation *location;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

