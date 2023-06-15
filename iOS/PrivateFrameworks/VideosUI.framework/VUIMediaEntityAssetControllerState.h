//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityAssetControllerState : NSObject
{
    _Bool _supportsCancellation;
    _Bool _supportsPausing;
    _Bool _renewsOfflineKeysAutomatically;
    _Bool _performsKeyFetchOnly;
    _Bool _allowsCellular;
    _Bool _downloadFailedDueToError;
    unsigned long long _status;
    double _downloadProgress;
    NSDate *_downloadExpirationDate;
    NSDate *_availabilityEndDate;
    unsigned long long _bytesToDownload;
    unsigned long long _bytesDownloaded;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(nonatomic) unsigned long long bytesToDownload; // @synthesize bytesToDownload=_bytesToDownload;
@property(nonatomic) _Bool downloadFailedDueToError; // @synthesize downloadFailedDueToError=_downloadFailedDueToError;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
@property(nonatomic) _Bool performsKeyFetchOnly; // @synthesize performsKeyFetchOnly=_performsKeyFetchOnly;
@property(retain, nonatomic) NSDate *availabilityEndDate; // @synthesize availabilityEndDate=_availabilityEndDate;
@property(retain, nonatomic) NSDate *downloadExpirationDate; // @synthesize downloadExpirationDate=_downloadExpirationDate;
@property(nonatomic) _Bool renewsOfflineKeysAutomatically; // @synthesize renewsOfflineKeysAutomatically=_renewsOfflineKeysAutomatically;
@property(nonatomic) _Bool supportsPausing; // @synthesize supportsPausing=_supportsPausing;
@property(nonatomic) _Bool supportsCancellation; // @synthesize supportsCancellation=_supportsCancellation;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isDownloadInProgress) _Bool downloadInProgress;
- (id)init;

@end

