//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSOperationQueue, NSString, NSURL, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIStoreAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    _Bool _isITunesStream;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    NSOperationQueue *_operationQueue;
    _Bool _shouldUseITunesStoreSecureKeyDelivery;
    SKUIClientContext *_clientContext;
}

+ (id)storeAssetResourceLoaderDelegateForPlayableAsset:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
