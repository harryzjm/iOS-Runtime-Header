//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface ICMusicSubscriptionPlaybackURLRequest
{
    _Bool _delegatedPlayback;
    NSString *_assetSourceStorefrontID;
    NSData *_certificateData;
    NSString *_cloudUniversalLibraryID;
    long long _requestType;
    unsigned long long _storeCloudID;
    long long _storePurchasedAdamID;
    long long _storeSubscriptionAdamID;
}

+ (_Bool)requiresCertificateDataForRequestType:(long long)arg1;
@property(nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property(nonatomic) unsigned long long storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic, getter=isDelegatedPlayback) _Bool delegatedPlayback; // @synthesize delegatedPlayback=_delegatedPlayback;
@property(copy, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property(copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
- (void).cxx_destruct;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

