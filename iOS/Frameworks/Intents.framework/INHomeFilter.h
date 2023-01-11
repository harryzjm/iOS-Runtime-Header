//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSArray, NSString;

@interface INHomeFilter : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    _Bool _isExcludeFilter;
    _Bool _hasAllQuantifier;
    NSArray *_entityIdentifiers;
    INSpeakableString *_entityName;
    long long _entityType;
    long long _outerDeviceType;
    INSpeakableString *_outerDeviceName;
    long long _deviceType;
    INSpeakableString *_home;
    INSpeakableString *_zone;
    INSpeakableString *_group;
    INSpeakableString *_room;
    INSpeakableString *_accessory;
    long long _subServiceType;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasAllQuantifier; // @synthesize hasAllQuantifier=_hasAllQuantifier;
@property(readonly, nonatomic) long long subServiceType; // @synthesize subServiceType=_subServiceType;
@property(readonly, copy, nonatomic) INSpeakableString *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) _Bool isExcludeFilter; // @synthesize isExcludeFilter=_isExcludeFilter;
@property(readonly, copy, nonatomic) INSpeakableString *room; // @synthesize room=_room;
@property(readonly, copy, nonatomic) INSpeakableString *group; // @synthesize group=_group;
@property(readonly, copy, nonatomic) INSpeakableString *zone; // @synthesize zone=_zone;
@property(readonly, copy, nonatomic) INSpeakableString *home; // @synthesize home=_home;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, copy, nonatomic) INSpeakableString *outerDeviceName; // @synthesize outerDeviceName=_outerDeviceName;
@property(readonly, nonatomic) long long outerDeviceType; // @synthesize outerDeviceType=_outerDeviceType;
@property(readonly, nonatomic) long long entityType; // @synthesize entityType=_entityType;
@property(readonly, copy, nonatomic) INSpeakableString *entityName; // @synthesize entityName=_entityName;
@property(readonly, copy, nonatomic) NSArray *entityIdentifiers; // @synthesize entityIdentifiers=_entityIdentifiers;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long serviceType;
@property(readonly, copy, nonatomic) INSpeakableString *service;
@property(readonly, copy, nonatomic) INSpeakableString *scene;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 outerDeviceName:(id)arg5 deviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(_Bool)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 innerDeviceName:(id)arg5 innerDeviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(_Bool)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 entityType:(long long)arg8 serviceType:(long long)arg9 subServiceType:(long long)arg10 isExcludeFilter:(_Bool)arg11 entityName:(id)arg12;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11 isExcludeFilter:(_Bool)arg12;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 outerDeviceName:(id)arg5 deviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(_Bool)arg11 hasAllQuantifier:(_Bool)arg12;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
