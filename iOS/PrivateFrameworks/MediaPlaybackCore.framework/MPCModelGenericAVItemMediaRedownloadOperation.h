//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class ICMediaRedownloadRequest, ICStoreRequestContext, MPCModelGenericAVItemAssetLoadProperties, NSObject;
@protocol OS_dispatch_queue;

@interface MPCModelGenericAVItemMediaRedownloadOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICMediaRedownloadRequest *_mediaDownloadRequest;
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // @synthesize assetLoadProperties=_assetLoadProperties;
- (void).cxx_destruct;
- (void)execute;
- (void)cancel;
- (id)init;

@end

