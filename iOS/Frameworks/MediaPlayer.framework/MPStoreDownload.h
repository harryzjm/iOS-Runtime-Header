//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSMutableArray, NSString, SSDownload, SSPurchase, SSPurchaseResponse;
@protocol OS_dispatch_queue;

@interface MPStoreDownload : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_attributes;
    _Bool _canceled;
    NSMutableArray *_overridePhaseIdentifiers;
    SSDownload *_SSDownload;
    SSPurchase *_SSPurchase;
    SSPurchaseResponse *_SSPurchaseResponse;
    NSString *_downloadFilePath;
    long long _type;
}

+ (id)_SSPurchaseForType:(long long)arg1 attributes:(id)arg2;
+ (id)storeDownloadWithDownloadIdentifier:(long long)arg1;
+ (id)storeDownloadForStoreOffer:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)storeDownloadForStoreItemOffer:(id)arg1 attributes:(id)arg2;
+ (id)storeDownloadForMediaItem:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (_Bool)_getEffectiveStoreDownloadAttributes:(id *)arg1 forPlaybackItemMetadata:(id)arg2 attributes:(id)arg3;
+ (id)storeDownloadForPlaybackItemMetadata:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (_Bool)canCreateStoreDownloadForPlaybackItemMetadata:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)_valueForDownloadProperty:(id)arg1;
- (id)_currentOverridePhaseIdentifier;
- (void)_removeOverridePhaseIdentifier:(id)arg1;
- (void)_addOverridePhaseIdentifier:(id)arg1;
- (void)_setDownloadFilePath:(id)arg1;
- (id)_getDownloadFilePath;
- (id)_SSPurchaseResponse;
- (id)_SSPurchase;
- (id)_SSDownload;
- (void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2;
- (void)_setSSDownload:(id)arg1;
- (void)_setCanceled:(_Bool)arg1;
- (_Bool)_isCanceled;
- (void)resetCachedRentalInformation;
- (id)assetsForType:(id)arg1;
@property(readonly, nonatomic) long long storeItemIdentifier;
@property(readonly, nonatomic) NSDictionary *rentalInformation;
@property(readonly, nonatomic) long long reason;
@property(readonly, nonatomic) NSError *purchaseError;
@property(readonly, nonatomic) NSString *phaseIdentifier;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) unsigned long long libraryItemIdentifier;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isRestore) _Bool restore;
@property(readonly, nonatomic, getter=isPurchasing) _Bool purchasing;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;
@property(readonly, nonatomic) NSError *failureError;
@property(readonly, nonatomic) long long downloadSizeLimit;
@property(readonly, nonatomic) long long downloadIdentifier;
@property(readonly, nonatomic) long long bytesTotal;
@property(readonly, nonatomic) long long bytesDownloaded;
- (id)description;
- (id)initWithType:(long long)arg1 attributes:(id)arg2;

@end

