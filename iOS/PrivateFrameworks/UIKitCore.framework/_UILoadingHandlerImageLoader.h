//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UILoadingHandlerImageLoader
{
    NSObject<OS_dispatch_queue> *_loadingQueue;
    CDUnknownBlockType _loadingHandler;
}

- (void).cxx_destruct;
- (void)_really_loadImage:(CDUnknownBlockType)arg1;
- (id)initWithLoadingQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
