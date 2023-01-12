//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarouselPreferenceServices/NSObject-Protocol.h>

@class NSString;
@protocol CSLPRFApplication, CSLPRFPerApplicationSettings, CSLPRFPerApplicationSettingsDelegate, NSObject;

@protocol CSLPRFPerApplicationSettings <NSObject>
+ (NSString *)globalDefaultIdentifer;
+ (const char *)notificationName;
+ (NSString *)settingsKey;
+ (Class)serializationClass;
+ (id <CSLPRFPerApplicationSettings>)globalSettingsWithSerialization:(id <NSObject>)arg1 delegate:(id <CSLPRFPerApplicationSettingsDelegate>)arg2;
+ (id <CSLPRFPerApplicationSettings>)settingsForApplication:(id <CSLPRFApplication>)arg1 withSerialization:(id <NSObject>)arg2 delegate:(id <CSLPRFPerApplicationSettingsDelegate>)arg3;
@property(readonly, nonatomic) _Bool hasCustomSetting;
@property(readonly, nonatomic) _Bool isGlobalDefault;
@property(readonly, nonatomic) id <CSLPRFApplication> application;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id <NSObject>)serialize;
- (void)updateSettingsWithBlock:(void (^)(id))arg1;
- (id)resolvedSettingWithGlobalSettings:(id <CSLPRFPerApplicationSettings>)arg1;
@end

