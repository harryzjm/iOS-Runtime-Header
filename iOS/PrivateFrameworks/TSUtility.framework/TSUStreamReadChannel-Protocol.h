//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSUtility/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol TSUStreamReadChannel <NSObject>
- (void)close;
- (void)readWithQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg2;
@end

