//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSMutableCopying-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class BSMutableIntegerMap, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding>
{
    id <BSSettingDescriptionProvider> _descriptionProvider;
    BSMutableIntegerMap *_settingToFlagMap;
    BSMutableIntegerMap *_settingToObjectMap;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
- (void).cxx_destruct;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (void)_removeAllSettings;
- (void)_setObject:(id)arg1 forSetting:(unsigned long long)arg2;
- (void)_setFlag:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)_applyToSettings:(id)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_newMapTable;
- (void)_enumerateSettingsForObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)allSettings;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)objectForSetting:(unsigned long long)arg1;
- (void)enumerateFlagsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)boolForSetting:(unsigned long long)arg1;
- (long long)flagForSetting:(unsigned long long)arg1;
- (_Bool)isEmpty;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)_init;
- (_Bool)isKeyedSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

