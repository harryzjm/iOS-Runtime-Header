//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic;

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject
{
    _Bool _broadcastEnable;
    HAPCharacteristic *_characteristic;
    unsigned long long _broadcastInterval;
}

+ (id)configurationTupleForCharacteristic:(id)arg1 broadcastEnable:(_Bool)arg2 broadcastInterval:(unsigned long long)arg3;
@property(nonatomic) unsigned long long broadcastInterval; // @synthesize broadcastInterval=_broadcastInterval;
@property(nonatomic) _Bool broadcastEnable; // @synthesize broadcastEnable=_broadcastEnable;
@property(retain, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;

@end
