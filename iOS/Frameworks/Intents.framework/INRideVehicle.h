//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INRideVehicleExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLLocation, INImage, NSString;

@interface INRideVehicle : NSObject <INCacheableContainer, INRideVehicleExport, NSCopying, NSSecureCoding>
{
    CLLocation *_location;
    NSString *_registrationPlate;
    NSString *_manufacturer;
    NSString *_model;
    INImage *_mapAnnotationImage;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INImage *mapAnnotationImage; // @synthesize mapAnnotationImage=_mapAnnotationImage;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *registrationPlate; // @synthesize registrationPlate=_registrationPlate;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
