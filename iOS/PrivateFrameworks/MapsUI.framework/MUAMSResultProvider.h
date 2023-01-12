//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MUAMSResultCache;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MUAMSResultProvider : NSObject
{
    MUAMSResultCache *_amsResultCache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_finishWithResults:(id)arg1 error:(id)arg2 onCallbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchResultsForBundleIds:(id)arg1 options:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchResultsForAdamIds:(id)arg1 options:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithCache:(id)arg1;

@end

