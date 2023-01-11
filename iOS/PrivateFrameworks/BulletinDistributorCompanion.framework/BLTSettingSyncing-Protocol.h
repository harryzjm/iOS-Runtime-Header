//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTPBSectionIcon, BLTPBSectionInfo, NSString;

@protocol BLTSettingSyncing <NSObject>
- (void)setNotificationsGrouping:(int)arg1 sectionID:(NSString *)arg2;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(NSString *)arg2 mirror:(_Bool)arg3;
- (void)removeSectionWithSectionID:(NSString *)arg1;
- (void)setSectionSubtypeParametersIcon:(BLTPBSectionIcon *)arg1 forSectionID:(NSString *)arg2 forSubtypeID:(long long)arg3;
- (void)setSectionInfo:(BLTPBSectionInfo *)arg1 completion:(void (^)(void))arg2;
@end

