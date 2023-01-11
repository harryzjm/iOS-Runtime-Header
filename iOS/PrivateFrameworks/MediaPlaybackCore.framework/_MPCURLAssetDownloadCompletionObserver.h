//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVURLAsset;

@interface _MPCURLAssetDownloadCompletionObserver : NSObject
{
    AVURLAsset *_asset;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) __weak AVURLAsset *asset; // @synthesize asset=_asset;
- (void)_notifyCompletionHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_downloadCompleteFailedNotification:(id)arg1;
- (void)_downloadCompleteSuccessNotification:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end
