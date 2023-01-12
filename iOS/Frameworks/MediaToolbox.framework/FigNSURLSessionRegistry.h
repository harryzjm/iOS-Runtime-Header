//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FigNSURLSessionRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_sessionArray;
}

- (void)dealloc;
- (id)init;
- (void)releaseSession:(id)arg1;
- (void)_checkForDoom:(id)arg1;
- (void)copySessionAndAssertionForClientBundleIdentifier:(id)arg1 clientPersonaIdentifier:(id)arg2 dispatchQueue:(id)arg3 outSession:(id *)arg4 outAssertion:(struct FigOpaqueAssertion **)arg5;

@end

