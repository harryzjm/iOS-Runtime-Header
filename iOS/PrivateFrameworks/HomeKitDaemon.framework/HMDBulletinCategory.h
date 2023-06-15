//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HMDBulletinCategory : HMFObject
{
}

+ (id)presentationValueForValue:(id)arg1 type:(id)arg2;
+ (id)_presentationTypeForType:(id)arg1;
+ (id)_localizedStateForValue:(id)arg1 characteristicType:(id)arg2;
+ (id)targetCurrentCharacteristicTypeMap;
+ (id)bulletinReasonForChangedCharacteristic:(id)arg1;
+ (_Bool)isSecureServiceType:(id)arg1;
+ (_Bool)isSensorDetectedCharacteristic:(id)arg1;
+ (id)composedNameForCharacteristic:(id)arg1;
+ (id)trimLeadingAndTailingDotInName:(id)arg1;
+ (id)trimLeadingAndTailingSpacesInName:(id)arg1;
+ (id)localizedStateForCharacteristic:(id)arg1;
+ (id)localizedActionForCharacteristic:(id)arg1;
+ (id)localizedStringForItems:(id)arg1;
+ (id)_sensorMap;
+ (id)_secureStateMap;
+ (id)_enumerationValueLocalizationKeys;

@end

