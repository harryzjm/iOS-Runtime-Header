//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBSectionInfo, NSArray, NSSet, NSString;

@protocol BBSettingsGatewayServerInterface <NSObject>
- (void)refreshSectionInfo;
- (void)refreshGlobalSettings;
- (void)refreshAnnounceSettings;
- (void)getSectionIDsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2 withHandler:(void (^)(void))arg3;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2;
- (void)getEffectiveSectionInfoForSectionIDs:(NSSet *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)getSectionInfoForSectionIDs:(NSSet *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)getEffectiveSectionInfoForSectionID:(NSString *)arg1 withHandler:(void (^)(BBSectionInfo *))arg2;
- (void)getSectionInfoForSectionID:(NSString *)arg1 withHandler:(void (^)(BBSectionInfo *))arg2;
- (void)getActiveSectionIDsWithHandler:(void (^)(NSSet *, NSError *))arg1;
- (void)getSectionInfoForActiveSectionsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getEffectiveSectionInfoWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getSectionInfoWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(NSArray *)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalScheduledDeliverySettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalAnnounceSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalAnnounceSettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalContentPreviewsSettingWithHandler:(void (^)(long long, NSError *))arg1;
@end

