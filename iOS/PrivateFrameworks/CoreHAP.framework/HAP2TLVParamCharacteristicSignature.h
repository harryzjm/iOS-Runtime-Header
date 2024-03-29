//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAP2TLVCharacteristicPropertiesWrapper, HAPTLVUnsignedNumberValue, NSData, NSString;

__attribute__((visibility("hidden")))
@interface HAP2TLVParamCharacteristicSignature : NSObject
{
    HAPTLVUnsignedNumberValue *_instanceID;
    NSData *_characteristicType;
    HAP2TLVCharacteristicPropertiesWrapper *_characteristicProperties;
    NSString *_userDescription;
    NSData *_bluetoothFormat;
    NSData *_validRange;
    NSData *_stepValue;
    NSData *_validValues;
    NSData *_validValuesRange;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *validValuesRange; // @synthesize validValuesRange=_validValuesRange;
@property(retain, nonatomic) NSData *validValues; // @synthesize validValues=_validValues;
@property(retain, nonatomic) NSData *stepValue; // @synthesize stepValue=_stepValue;
@property(retain, nonatomic) NSData *validRange; // @synthesize validRange=_validRange;
@property(retain, nonatomic) NSData *bluetoothFormat; // @synthesize bluetoothFormat=_bluetoothFormat;
@property(retain, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(retain, nonatomic) HAP2TLVCharacteristicPropertiesWrapper *characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(retain, nonatomic) NSData *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithInstanceID:(id)arg1 characteristicType:(id)arg2 characteristicProperties:(id)arg3 userDescription:(id)arg4 bluetoothFormat:(id)arg5 validRange:(id)arg6 stepValue:(id)arg7 validValues:(id)arg8 validValuesRange:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

