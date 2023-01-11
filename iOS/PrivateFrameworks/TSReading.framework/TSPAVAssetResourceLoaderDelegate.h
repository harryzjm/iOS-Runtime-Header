//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSString, TSPFileDataStorage;
@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    TSPFileDataStorage *_dataStorage;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_queue> *_concurrentRequestQueue;
    NSString *_contentTypeUTI;
}

- (void).cxx_destruct;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)dealloc;
- (void)_provideData:(id)arg1 untilRequestCancelledForResourceLoadingRequest:(id)arg2;
- (id)delegateQueue;
- (id)initWithTSPFileDataStorage:(id)arg1 contentTypeUTI:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

