//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFHomePersonManagerSettingPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFHomeSetting-Protocol.h>

@class MKFHomePersonManagerSettingDatabaseID, NSUUID;

@protocol MKFHomePersonManagerSetting <MKFHomeSetting, MKFHomePersonManagerSettingPublicExtensions>
@property(readonly, copy, nonatomic) MKFHomePersonManagerSettingDatabaseID *databaseID;
@property(copy, nonatomic) NSUUID *zoneUUID;
@end

