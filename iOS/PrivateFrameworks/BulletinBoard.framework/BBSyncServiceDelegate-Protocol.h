//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBBulletin, BBSyncService, NSArray, NSString;

@protocol BBSyncServiceDelegate <NSObject>
- (NSString *)syncService:(BBSyncService *)arg1 sectionIdentifierForUniversalSectionIdentifier:(NSString *)arg2;
- (NSString *)syncService:(BBSyncService *)arg1 universalSectionIdentifierForSectionIdentifier:(NSString *)arg2;
- (_Bool)syncService:(BBSyncService *)arg1 shouldAbortDelayedDismissalForBulletin:(BBBulletin *)arg2;
- (void)syncService:(BBSyncService *)arg1 receivedDismissalDictionaries:(NSArray *)arg2 dismissalIDs:(NSArray *)arg3 inSection:(NSString *)arg4 forFeeds:(unsigned long long)arg5;
@end

