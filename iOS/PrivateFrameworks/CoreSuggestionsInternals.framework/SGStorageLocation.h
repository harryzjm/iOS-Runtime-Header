//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>
#import <CoreSuggestionsInternals/NSSecureCoding-Protocol.h>
#import <CoreSuggestionsInternals/SGEventLocationForGeocode-Protocol.h>

@class NSData, NSString;

@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding, SGEventLocationForGeocode>
{
    unsigned long long _locationType;
    NSString *_label;
    NSString *_address;
    NSString *_airportCode;
    double _latitude;
    double _longitude;
    double _accuracy;
    double _quality;
    NSData *_handle;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) double quality; // @synthesize quality=_quality;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) NSString *airportCode; // @synthesize airportCode=_airportCode;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long locationType; // @synthesize locationType=_locationType;
- (void).cxx_destruct;
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;
- (id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;
- (id)geocodeHandle;
- (double)geocodeAccuracy;
- (double)geocodeLongitude;
- (double)geocodeLatitude;
- (_Bool)geocodeIsEnd;
- (_Bool)geocodeIsStart;
- (id)geocodeAirportCode;
- (id)geocodeAddress;
- (id)geocodeLabel;
@property(readonly, copy) NSString *description;
- (id)convertToLocationWithId:(id)arg1 origin:(id)arg2;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToStorageLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 accuracy:(double)arg7 quality:(double)arg8 handle:(id)arg9;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 airportCode:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 accuracy:(double)arg6 quality:(double)arg7;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 accuracy:(double)arg5 quality:(double)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

