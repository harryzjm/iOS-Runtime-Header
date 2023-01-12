//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WLKBadgingUtilities : NSObject
{
}

+ (void)clearSavedBadgeIdentifiers;
+ (_Bool)removeBadgeIdentifier:(id)arg1;
+ (_Bool)addBadgeIdentifier:(id)arg1;
+ (_Bool)hasMigrated;
+ (id)badgeIdentifiers;
+ (id)currentBadgeNumber;
+ (id)sharedUtilities;
- (void)migrateToNewBadgingSystemIfNeeded;
- (id)_notificationCenter;

@end
