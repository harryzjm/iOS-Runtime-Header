//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class BMHomeKitClientBase, NSArray, NSData, NSNumber, NSString;

@interface BMHomeKitClientAccessoryControlEvent <BMStoreData, BMProtoBufWrapper>
{
    BMHomeKitClientBase *_base;
    NSString *_accessoryUniqueIdentifier;
    NSString *_accessoryStateString;
    NSNumber *_accessoryStateNumber;
    NSData *_accessoryStateData;
    NSString *_serviceUniqueIdentifier;
    NSString *_serviceType;
    NSString *_characteristicType;
    NSString *_serviceGroupUniqueIdentifier;
    NSArray *_zoneUniqueIdentifiers;
    NSString *_roomUniqueIdentifier;
    NSString *_accessoryName;
    NSString *_serviceName;
    NSString *_roomName;
    NSString *_serviceGroupName;
    NSArray *_zoneNames;
    NSString *_homeName;
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property(readonly, copy, nonatomic) NSArray *zoneNames; // @synthesize zoneNames=_zoneNames;
@property(readonly, copy, nonatomic) NSString *serviceGroupName; // @synthesize serviceGroupName=_serviceGroupName;
@property(readonly, copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, copy, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, copy, nonatomic) NSString *roomUniqueIdentifier; // @synthesize roomUniqueIdentifier=_roomUniqueIdentifier;
@property(readonly, copy, nonatomic) NSArray *zoneUniqueIdentifiers; // @synthesize zoneUniqueIdentifiers=_zoneUniqueIdentifiers;
@property(readonly, copy, nonatomic) NSString *serviceGroupUniqueIdentifier; // @synthesize serviceGroupUniqueIdentifier=_serviceGroupUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, copy, nonatomic) NSString *serviceUniqueIdentifier; // @synthesize serviceUniqueIdentifier=_serviceUniqueIdentifier;
@property(readonly, copy, nonatomic) NSData *accessoryStateData; // @synthesize accessoryStateData=_accessoryStateData;
@property(readonly, copy, nonatomic) NSNumber *accessoryStateNumber; // @synthesize accessoryStateNumber=_accessoryStateNumber;
@property(readonly, copy, nonatomic) NSString *accessoryStateString; // @synthesize accessoryStateString=_accessoryStateString;
@property(readonly, copy, nonatomic) NSString *accessoryUniqueIdentifier; // @synthesize accessoryUniqueIdentifier=_accessoryUniqueIdentifier;
@property(readonly, copy, nonatomic) BMHomeKitClientBase *base; // @synthesize base=_base;
- (_Bool)isEqual:(id)arg1;
- (id)proto;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)encodeAsProto;
- (id)serialize;
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithBase:(id)arg1 dataAccessoryState:(id)arg2 accessoryUniqueIdentifier:(id)arg3 serviceUniqueIdentifier:(id)arg4 serviceType:(id)arg5 characteristicType:(id)arg6 serviceGroupUniqueIdentifier:(id)arg7 zoneUniqueIdentifiers:(id)arg8 roomUniqueIdentifier:(id)arg9 accessoryName:(id)arg10 serviceName:(id)arg11 roomName:(id)arg12 serviceGroupName:(id)arg13 zoneNames:(id)arg14 homeName:(id)arg15;
- (id)initWithBase:(id)arg1 numberAccessoryState:(id)arg2 accessoryUniqueIdentifier:(id)arg3 serviceUniqueIdentifier:(id)arg4 serviceType:(id)arg5 characteristicType:(id)arg6 serviceGroupUniqueIdentifier:(id)arg7 zoneUniqueIdentifiers:(id)arg8 roomUniqueIdentifier:(id)arg9 accessoryName:(id)arg10 serviceName:(id)arg11 roomName:(id)arg12 serviceGroupName:(id)arg13 zoneNames:(id)arg14 homeName:(id)arg15;
- (id)initWithBase:(id)arg1 stringAccessoryState:(id)arg2 accessoryUniqueIdentifier:(id)arg3 serviceUniqueIdentifier:(id)arg4 serviceType:(id)arg5 characteristicType:(id)arg6 serviceGroupUniqueIdentifier:(id)arg7 zoneUniqueIdentifiers:(id)arg8 roomUniqueIdentifier:(id)arg9 accessoryName:(id)arg10 serviceName:(id)arg11 roomName:(id)arg12 serviceGroupName:(id)arg13 zoneNames:(id)arg14 homeName:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
