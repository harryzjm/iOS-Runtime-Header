//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet;

@interface BRInterfaceKeyboard
{
    struct __IOHIDEventSystemClient *_client;
    NSMutableDictionary *_propertyCache;
    unsigned long long _doublePressTimeoutUs;
    unsigned long long _triplePressTimeoutUs;
    unsigned long long _longPressTimeoutUs;
    _Bool _isReady;
    unsigned long long _maxAssetSlots;
    unsigned long long _unusedAssetSlots;
    NSMutableSet *_services;
}

+ (id)interface;
@property(readonly, nonatomic) NSMutableSet *services; // @synthesize services=_services;
- (unsigned long long)unusedAssetSlots;
- (unsigned long long)maxAssetSlots;
- (_Bool)isReady;
- (_Bool)_setCachedPropertiesOnService:(struct __IOHIDServiceClient *)arg1;
- (_Bool)_servicesSetProperty:(void *)arg1 forKey:(struct __CFString *)arg2;
- (_Bool)_disableState:(unsigned long long)arg1;
- (_Bool)_enableState:(unsigned long long)arg1;
- (_Bool)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id *)arg3;
- (void)_findServices;
- (void)scheduleReadyNotificationWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)disableStates:(id)arg1 clearAsset:(_Bool)arg2 error:(id *)arg3;
- (_Bool)enableStates:(id)arg1 error:(id *)arg2;
- (_Bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id *)arg4;
- (_Bool)setGlobalConfigs:(id)arg1 error:(id *)arg2;
- (id)propertyList;
- (id)description;
- (void)dealloc;
- (id)init;

@end

