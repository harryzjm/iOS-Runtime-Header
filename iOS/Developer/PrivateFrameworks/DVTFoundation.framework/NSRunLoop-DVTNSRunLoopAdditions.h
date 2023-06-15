//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSRunLoop.h>

@interface NSRunLoop (DVTNSRunLoopAdditions)
- (void)dvt_spinRunLoopInMode:(id)arg1 waitingForGroup:(id)arg2;
- (void)dvt_spinRunLoopInMode:(id)arg1 waitingForSemaphore:(id)arg2;
- (void)dvt_spinRunLoopInMode:(id)arg1 whileBlockExecutesConcurrently:(CDUnknownBlockType)arg2;
- (void)dvt_spinRunLoopInMode:(id)arg1 whileQueue:(id)arg2 executesAsynchronously:(CDUnknownBlockType)arg3;
- (void)dvt_spinRunLoopInMode:(id)arg1 until:(CDUnknownBlockType)arg2;
- (id)dvt_performInModes:(id)arg1 withOrder:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
@end

