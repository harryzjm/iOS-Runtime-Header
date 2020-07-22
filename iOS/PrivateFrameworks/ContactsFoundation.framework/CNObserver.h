//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CNObserver : NSObject
{
}

+ (void)sendObserver:(id)arg1 resultsOfBlock:(CDUnknownBlockType)arg2;
+ (void)sendResult:(id)arg1 error:(id)arg2 toObserver:(id)arg3;
+ (void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 untilCanceled:(id)arg4;
+ (void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3;
+ (id)observerWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1;
+ (id)observerWithWeakTarget:(id)arg1 resultSelector:(SEL)arg2;

@end

