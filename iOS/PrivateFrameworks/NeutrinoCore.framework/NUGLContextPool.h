//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NUGLContextPool : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
}

+ (id)sharedContextPool;
- (void).cxx_destruct;
- (void)_returnContext:(id)arg1;
- (id)_newContext;
- (void)returnContext:(id)arg1;
- (id)newContext;
- (id)init;

@end
