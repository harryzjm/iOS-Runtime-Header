//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FlexCloudSongAsset.h"

@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset
{
    long long _newestContentVersion;
    long long _newestCompatibilityVersion;
}

@property(nonatomic) long long newestCompatibilityVersion; // @synthesize newestCompatibilityVersion=_newestCompatibilityVersion;
@property(nonatomic) long long newestContentVersion; // @synthesize newestContentVersion=_newestContentVersion;
- (_Bool)contentUpdateAvailable;
- (unsigned long long)assetStatus;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (id)initWithAssetID:(id)arg1 localURL:(id)arg2 cloudManager:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5;

@end

