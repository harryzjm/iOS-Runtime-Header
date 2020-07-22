//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _FPProgressProxy : NSProgress
{
    id _subscriber;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)stopTrackingIfStarted;
- (void)startTrackingFileURL:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;

@end

