//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVVCKeepAliveManager : NSObject
{
    struct AVVCKeepAliveImpl *_impl;
    NSObject<OS_dispatch_queue> *mKeepAliveDispatchQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destroyWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)createWithCompletion:(CDUnknownBlockType)arg1;
- (id)getDispatchQueue;
- (id)init;

@end

