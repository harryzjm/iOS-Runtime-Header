//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileAsset/MAAsset.h>

@interface MAAsset (SUS)
- (_Bool)purge;
- (_Bool)cancelDownload;
- (void)cleanupAsset;
- (void)cancelDownloadIfNecessary;
- (_Bool)isEmergencyUpdate;
- (_Bool)isInstalled;
- (_Bool)isDownloading;
- (_Bool)isDownloadingOrInstalled;
@end

