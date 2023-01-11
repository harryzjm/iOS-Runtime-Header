//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURLRequest, SSURLRequestProperties;

@interface SSDownloadAsset
{
    long long _assetType;
    SSURLRequestProperties *_localProperties;
}

+ (id)assetWithURL:(id)arg1 type:(long long)arg2;
+ (long long)_setValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;
- (id)_copyURLRequestProperties;
@property(readonly, getter=isExternal) _Bool external;
@property(readonly) long long fileSize;
@property(readonly) NSString *finalizedPath;
@property(readonly) NSString *downloadPath;
@property(readonly) NSString *downloadFileName;
- (long long)assetType;
- (id)initWithURLRequest:(id)arg1 type:(long long)arg2;
- (id)copyXPCEncoding;
@property(readonly) SSURLRequestProperties *_localProperties;
- (long long)_legacyAssetType;
@property(readonly) SSURLRequestProperties *URLRequestProperties;
- (void)_resetLocalIVars;
@property(readonly, retain) NSURLRequest *URLRequest;
@property(readonly) NSArray *sinfs;
- (long long)bytesUploadTotal;
- (long long)bytesUploaded;
- (long long)bytesDownloaded;
- (void)dealloc;
- (id)initWithURLRequestProperties:(id)arg1;
- (id)initWithURLRequest:(id)arg1;

@end
