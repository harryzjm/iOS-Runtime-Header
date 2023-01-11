//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSString;

@interface INBusTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_provider;
    NSString *_busName;
    NSString *_busNumber;
    INDateComponentsRange *_tripDuration;
    CLPlacemark *_departureBusStopLocation;
    NSString *_departurePlatform;
    CLPlacemark *_arrivalBusStopLocation;
    NSString *_arrivalPlatform;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *arrivalPlatform; // @synthesize arrivalPlatform=_arrivalPlatform;
@property(readonly, copy, nonatomic) CLPlacemark *arrivalBusStopLocation; // @synthesize arrivalBusStopLocation=_arrivalBusStopLocation;
@property(readonly, copy, nonatomic) NSString *departurePlatform; // @synthesize departurePlatform=_departurePlatform;
@property(readonly, copy, nonatomic) CLPlacemark *departureBusStopLocation; // @synthesize departureBusStopLocation=_departureBusStopLocation;
@property(readonly, copy, nonatomic) INDateComponentsRange *tripDuration; // @synthesize tripDuration=_tripDuration;
@property(readonly, copy, nonatomic) NSString *busNumber; // @synthesize busNumber=_busNumber;
@property(readonly, copy, nonatomic) NSString *busName; // @synthesize busName=_busName;
@property(readonly, copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithProvider:(id)arg1 busName:(id)arg2 busNumber:(id)arg3 tripDuration:(id)arg4 departureBusStopLocation:(id)arg5 departurePlatform:(id)arg6 arrivalBusStopLocation:(id)arg7 arrivalPlatform:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
