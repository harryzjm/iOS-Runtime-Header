//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOMapRequestManager : NSObject
{
    NSMutableSet *_requests;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)requestComplete:(id)arg1;
- (void)trackRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

