//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsBoolDetail-Protocol.h>

@class NSString;

@interface PSVoiceOverSettingsDetail : NSObject <PSSettingsBoolDetail>
{
}

+ (_Bool)isEnabled;
+ (void)setEnabled:(_Bool)arg1;
+ (id)iconImage;
+ (id)preferencesURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

