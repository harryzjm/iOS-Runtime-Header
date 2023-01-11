//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKLocation : NSObject <NSSecureCoding>
{
    _Bool _hasAltitude;
    _Atomic _Bool _hashComputed;
    _Atomic unsigned long long _hash;
    NSString *_name;
    NSString *_relevantText;
    double _latitude;
    double _longitude;
    double _altitude;
    double _maxDistance;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double maxDistance; // @synthesize maxDistance=_maxDistance;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(readonly, nonatomic) _Bool hasAltitude; // @synthesize hasAltitude=_hasAltitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *relevantText; // @synthesize relevantText=_relevantText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)CLLocation;
- (unsigned long long)hash;
- (_Bool)hasEqualCoordinatesToLocation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
