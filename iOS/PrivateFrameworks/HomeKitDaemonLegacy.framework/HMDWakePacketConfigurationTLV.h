//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, HMDSleepConfigurationWakePacketTypeWrapper, HMDSleepConfigurationWakeUpTypeWrapper, NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDWakePacketConfigurationTLV : NSObject
{
    HMDSleepConfigurationWakePacketTypeWrapper *_wakePacketType;
    HAPTLVUnsignedNumberValue *_wakeDestinationPort;
    NSData *_wakeDestinationAddress;
    HMDSleepConfigurationWakeUpTypeWrapper *_wakeType;
    NSData *_wakePattern;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *wakePattern; // @synthesize wakePattern=_wakePattern;
@property(retain, nonatomic) HMDSleepConfigurationWakeUpTypeWrapper *wakeType; // @synthesize wakeType=_wakeType;
@property(retain, nonatomic) NSData *wakeDestinationAddress; // @synthesize wakeDestinationAddress=_wakeDestinationAddress;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *wakeDestinationPort; // @synthesize wakeDestinationPort=_wakeDestinationPort;
@property(retain, nonatomic) HMDSleepConfigurationWakePacketTypeWrapper *wakePacketType; // @synthesize wakePacketType=_wakePacketType;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithWakePacketType:(id)arg1 wakeDestinationPort:(id)arg2 wakeDestinationAddress:(id)arg3 wakeType:(id)arg4 wakePattern:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

