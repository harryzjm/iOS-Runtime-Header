//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLSharedEventListener.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLSharedEventListenerInternal : MTLSharedEventListener
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void)dealloc;
- (id)dispatchQueue;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

