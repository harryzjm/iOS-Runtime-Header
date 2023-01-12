//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICStoreURLRequest.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest
{
    _Bool _delegatedPlayback;
    NSString *_assetSourceStorefrontID;
    NSData *_leaseCertificateData;
    NSData *_leaseAssetIDData;
    NSString *_cloudUniversalLibraryID;
    NSString *_playbackAuthorizationToken;
    long long _requestType;
    unsigned long long _storeCloudID;
    long long _storePurchasedAdamID;
    long long _storeSubscriptionAdamID;
}

- (void).cxx_destruct;
@property(nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property(nonatomic) unsigned long long storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic, getter=isDelegatedPlayback) _Bool delegatedPlayback; // @synthesize delegatedPlayback=_delegatedPlayback;
@property(copy, nonatomic) NSString *playbackAuthorizationToken; // @synthesize playbackAuthorizationToken=_playbackAuthorizationToken;
@property(copy, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property(copy, nonatomic) NSData *leaseAssetIDData; // @synthesize leaseAssetIDData=_leaseAssetIDData;
@property(copy, nonatomic) NSData *leaseCertificateData; // @synthesize leaseCertificateData=_leaseCertificateData;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
- (id)_signpostRequestInfo;
- (id)description;
- (void)_populateItemIdentifiers:(id)arg1;
- (id)_actionType;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

