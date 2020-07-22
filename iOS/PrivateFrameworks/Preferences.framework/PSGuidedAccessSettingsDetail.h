//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Preferences/PSSettingsDetail-Protocol.h>

@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>
{
}

+ (unsigned long long)guidedAccessAvailability;
+ (void)enterGuidedAccessMode;
+ (void)setGuidedAccessSwitchEnabled:(_Bool)arg1;
+ (_Bool)guidedAccessHasPasscode;
+ (id)iconImage;
+ (id)preferencesURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
