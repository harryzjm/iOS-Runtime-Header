//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPCModelGenericAVItemAssetLoadResult : NSObject
{
    _Bool _allowsAssetCaching;
    _Bool _allowsAssetInfoCaching;
    _Bool _isHomeSharingAsset;
    _Bool _isHLSAsset;
    _Bool _isCloudStreamingAsset;
    _Bool _iTunesStoreStream;
    NSString *_assetPathExtension;
    long long _assetProtectionType;
    long long _assetQualityType;
    NSURL *_assetURL;
    NSURL *_protectedContentSupportStorageFileURL;
    NSDictionary *_purchaseBundleDictionary;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_streamingKeyServerURL;
    NSURL *_alternateHLSPlaylistURL;
    NSURL *_alternateHLSKeyServerURL;
    NSURL *_alternateHLSKeyCertificateURL;
    id _suzeLeaseID;
    CDUnknownBlockType _willBecomeActivePlayerItemHandler;
}

+ (id)assetLoadResultWithStoreAssetPlaybackResponse:(id)arg1 assetLoadProperties:(id)arg2 error:(id *)arg3;
@property(copy, nonatomic) CDUnknownBlockType willBecomeActivePlayerItemHandler; // @synthesize willBecomeActivePlayerItemHandler=_willBecomeActivePlayerItemHandler;
@property(nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream; // @synthesize iTunesStoreStream=_iTunesStoreStream;
@property(retain, nonatomic) id suzeLeaseID; // @synthesize suzeLeaseID=_suzeLeaseID;
@property(copy, nonatomic) NSURL *alternateHLSKeyCertificateURL; // @synthesize alternateHLSKeyCertificateURL=_alternateHLSKeyCertificateURL;
@property(copy, nonatomic) NSURL *alternateHLSKeyServerURL; // @synthesize alternateHLSKeyServerURL=_alternateHLSKeyServerURL;
@property(copy, nonatomic) NSURL *alternateHLSPlaylistURL; // @synthesize alternateHLSPlaylistURL=_alternateHLSPlaylistURL;
@property(copy, nonatomic) NSURL *streamingKeyServerURL; // @synthesize streamingKeyServerURL=_streamingKeyServerURL;
@property(copy, nonatomic) NSURL *streamingKeyCertificateURL; // @synthesize streamingKeyCertificateURL=_streamingKeyCertificateURL;
@property(copy, nonatomic) NSDictionary *purchaseBundleDictionary; // @synthesize purchaseBundleDictionary=_purchaseBundleDictionary;
@property(copy, nonatomic) NSURL *protectedContentSupportStorageFileURL; // @synthesize protectedContentSupportStorageFileURL=_protectedContentSupportStorageFileURL;
@property(nonatomic) _Bool isCloudStreamingAsset; // @synthesize isCloudStreamingAsset=_isCloudStreamingAsset;
@property(nonatomic) _Bool isHLSAsset; // @synthesize isHLSAsset=_isHLSAsset;
@property(nonatomic) _Bool isHomeSharingAsset; // @synthesize isHomeSharingAsset=_isHomeSharingAsset;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) long long assetQualityType; // @synthesize assetQualityType=_assetQualityType;
@property(nonatomic) long long assetProtectionType; // @synthesize assetProtectionType=_assetProtectionType;
@property(copy, nonatomic) NSString *assetPathExtension; // @synthesize assetPathExtension=_assetPathExtension;
@property(nonatomic) _Bool allowsAssetInfoCaching; // @synthesize allowsAssetInfoCaching=_allowsAssetInfoCaching;
@property(nonatomic) _Bool allowsAssetCaching; // @synthesize allowsAssetCaching=_allowsAssetCaching;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasValidAsset;

@end

