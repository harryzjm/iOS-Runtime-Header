//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSSecureCoding-Protocol.h>

@interface PHMemoryFeature : NSObject <NSSecureCoding>
{
    id _subtypeSpecificAttribute;
    unsigned long long _type;
}

+ (id)personUniversalIdentifierForPersonLocalIdentifier:(id)arg1 photoLibrary:(id)arg2;
+ (id)personLocalIdentifierForPersonUniversalIdentifier:(id)arg1 photoLibrary:(id)arg2;
+ (id)stringForType:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)memoryFeatureWithData:(id)arg1 photoLibrary:(id)arg2;
+ (id)locationMemoryFeatureWithAreaForName:(id)arg1;
+ (id)locationMemoryFeatureWithLocation:(id)arg1;
+ (id)timeMemoryFeatureWithHolidayForName:(id)arg1;
+ (id)timeMemoryFeatureWithDate:(id)arg1;
+ (id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)collidesWithPersonWithLocalIdentifier:(id)arg1;
- (_Bool)collidesWithAreaWithName:(id)arg1;
- (_Bool)collidesWithLocationAtCoordinates:(struct CLLocationCoordinate2D)arg1;
- (_Bool)collidesWithHolidayWithName:(id)arg1;
- (_Bool)collidesWithDate:(id)arg1;
- (_Bool)collidesWithFeature:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)areaName;
- (id)location;
- (id)holidayName;
- (id)date;
- (id)personLocalIdentifier;
- (id)encodedDataWithPhotoLibrary:(id)arg1;

@end

