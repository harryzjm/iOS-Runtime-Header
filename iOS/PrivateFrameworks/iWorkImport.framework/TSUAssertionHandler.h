//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUAssertionHandler : NSObject
{
}

+ (int)_atomicIncrementAssertCount;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(_Bool)arg4 description:(const char *)arg5;
+ (void)simulateCrashWithMessage:(id)arg1;
+ (void)logBacktraceThrottled;
+ (void)logBacktraceWithCallStackSymbols:(id)arg1;
+ (void)logBacktrace;
+ (id)p_performBlockIgnoringAssertions:(CDUnknownBlockType)arg1 onlyFatal:(_Bool)arg2;
+ (id)performBlockIgnoringFatalAssertions:(CDUnknownBlockType)arg1;
+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;

@end

