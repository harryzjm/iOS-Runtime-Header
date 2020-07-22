//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ISFrameCurator : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Atomic int _nextRequestID;
    NSMutableDictionary *_requestsByID;
    NSObject<OS_dispatch_queue> *_requestsByIDQueue;
}

+ (id)defaultCurator;
- (void).cxx_destruct;
- (int)_nextRequestID;
- (id)_removeRequestWithID:(int)arg1;
- (void)_storeRequest:(id)arg1 withID:(int)arg2;
- (void)cancelRequestWithID:(int)arg1;
- (int)requestBestFramesInVideo:(id)arg1 trackID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

