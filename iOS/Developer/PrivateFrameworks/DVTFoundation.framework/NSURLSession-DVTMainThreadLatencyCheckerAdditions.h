//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLSession.h>

@interface NSURLSession (DVTMainThreadLatencyCheckerAdditions)
+ (id)__DVTMainThreadLatencyChecker__sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)__DVTMainThreadLatencyChecker__getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__DVTMainThreadLatencyChecker__getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__DVTMainThreadLatencyChecker__flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__DVTMainThreadLatencyChecker__resetWithCompletionHandler:(CDUnknownBlockType)arg1;
@end
