//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMSettingValue, NSString;

@interface HMDSettingAttachedSettingUpdate : HMFObject
{
    NSString *_keyPath;
    HMSettingValue *_settingValue;
}

- (void).cxx_destruct;
@property(readonly) HMSettingValue *settingValue; // @synthesize settingValue=_settingValue;
@property(readonly) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)initWithKeyPath:(id)arg1 settingValue:(id)arg2;

@end
