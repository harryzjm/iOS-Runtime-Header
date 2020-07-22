//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListener : NSObject
{
    NSMutableArray *_handlers;
    NSLock *_lock;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (id)sharedListener;
- (void).cxx_destruct;
- (void)waitForManifestWithCallback:(id)arg1;
- (void)_finish:(_Bool)arg1;
- (id)init;

@end
