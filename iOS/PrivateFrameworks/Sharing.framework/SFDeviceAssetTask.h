//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSError, SFDeviceAssetQuery;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SFDeviceAssetTask : NSObject
{
    SFDeviceAssetQuery *_deviceAssetQuery;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _completionHandler;
    NSBundle *_assetBundle;
    NSBundle *_fallbackAssetBundle;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSBundle *fallbackAssetBundle; // @synthesize fallbackAssetBundle=_fallbackAssetBundle;
@property(readonly, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) SFDeviceAssetQuery *deviceAssetQuery; // @synthesize deviceAssetQuery=_deviceAssetQuery;
- (void).cxx_destruct;
- (id)bundleAtURL:(id)arg1 error:(id *)arg2;
- (id)bundleFromAsset:(id)arg1;
- (void)complete;
- (void)cancelTimeout;
- (_Bool)updateTaskWithAsset:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3;
- (id)initWithDeviceQuery:(id)arg1 dispatchQueue:(id)arg2 timeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;

@end
