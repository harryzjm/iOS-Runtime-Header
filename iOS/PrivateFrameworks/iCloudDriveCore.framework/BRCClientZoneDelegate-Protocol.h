//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudDriveCore/NSObject-Protocol.h>

@class BRCClientZone;

@protocol BRCClientZoneDelegate <NSObject>
- (void)didInitialSyncDownForClientZone:(BRCClientZone *)arg1;
- (void)willInitialSyncDownForClientZone:(BRCClientZone *)arg1;
- (void)didChangeSyncStatusForZoneHealthForContainer:(BRCClientZone *)arg1;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(BRCClientZone *)arg1;
@end

