//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PLAssetDownloadRequestDelegate;

@interface PLAssetDownloadRequest : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestsById;
    NSMutableDictionary *_progressById;
    int _currentRequestId;
    id <PLAssetDownloadRequestDelegate> _delegate;
}

+ (id)defaultManager;
@property(nonatomic) __weak id <PLAssetDownloadRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelRequest:(int)arg1;
- (int)requestRequiredResourcesForManagedAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;

@end

