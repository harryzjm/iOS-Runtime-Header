//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (GKVersioning)
+ (_Bool)_gkMainBundleIsGameCenterSystemProcess;
+ (_Bool)_gkBundleIdentifierIsRelatedToContactsUI:(id)arg1;
+ (id)_gkPreferredUserLanguage;
+ (id)_gkPreferredSystemLanguage;
- (id)_gkFrameworkVersionDescription;
- (_Bool)_gkIsPurpleBuddy;
- (_Bool)_gkIsDaemon;
- (_Bool)_gkIsContacts;
- (_Bool)_gkIsFirstParty;
- (_Bool)_gkIsPreferences;
- (_Bool)_gkIsGameCenterExtension;
- (_Bool)_gkIsGameCenter;
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;
- (id)_gkSystemLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)_gkLocalizedName;
- (id)_gkBundleShortVersion;
- (id)_gkBundleVersion;
- (id)_gkPathForChallengeSound;
- (id)_gkPathForInviteSound;
- (id)_gkPathForMessageImage;
- (id)_gkPathForImageWithName:(id)arg1;
- (id)_gkPathForSoundWithName:(id)arg1;
@end

