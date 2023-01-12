//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol ATXModeEntityScorerInterface
- (void)assignModeEntityScores:(unsigned long long)arg1 entityTypeIdentifier:(NSString *)arg2 entityIdentifier:(NSString *)arg3 score:(double)arg4 modeConfigurationType:(long long)arg5 reply:(void (^)(_Bool, NSError *))arg6;
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(NSString *)arg1 modeIdentifier:(NSString *)arg2 modeConfigurationType:(long long)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)rankedContactsForDenyListForMode:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)scoreContactsForDenyList:(NSArray *)arg1 mode:(unsigned long long)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)rankedAppsForDenyListForMode:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)scoreAppsForDenyList:(NSArray *)arg1 mode:(unsigned long long)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)rankedNotificationsForMode:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)scoreNotifications:(NSArray *)arg1 mode:(unsigned long long)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)rankedWidgetsForMode:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)rankedAppsForMode:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)scoreApps:(NSArray *)arg1 mode:(unsigned long long)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)rankedContactsForMode:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)scoreContacts:(NSArray *)arg1 mode:(unsigned long long)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
@end

