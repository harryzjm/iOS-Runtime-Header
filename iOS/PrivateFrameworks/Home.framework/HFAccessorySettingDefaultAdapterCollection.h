//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFAccessorySettingAdapter, HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingSiriLanguageAdapter, NSSet;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject
{
    HFAccessorySettingManagedConfigurationAdapter *_managedConfigurationAdapter;
    HFAccessorySettingAdapter *_mobileTimerAdapter;
    HFAccessorySettingSiriLanguageAdapter *_siriLanguageAdapter;
}

@property(retain, nonatomic) HFAccessorySettingSiriLanguageAdapter *siriLanguageAdapter; // @synthesize siriLanguageAdapter=_siriLanguageAdapter;
@property(retain, nonatomic) HFAccessorySettingAdapter *mobileTimerAdapter; // @synthesize mobileTimerAdapter=_mobileTimerAdapter;
@property(retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *managedConfigurationAdapter; // @synthesize managedConfigurationAdapter=_managedConfigurationAdapter;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *allAdapters;

@end

