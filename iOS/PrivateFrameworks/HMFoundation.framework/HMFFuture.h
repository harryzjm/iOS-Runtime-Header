//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HMFFuture : NSObject
{
}

+ (id)inContext:(id)arg1 perform:(CDUnknownBlockType)arg2;
+ (id)futureWithPromise:(id *)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithValue:(id)arg1;
+ (id)futureWithDelay:(double)arg1;
+ (id)futureWithNoValue;
+ (id)anySettled:(id)arg1;
+ (id)any:(id)arg1;
+ (id)allSettled:(id)arg1;
+ (id)all:(id)arg1;
+ (id)futureForOperation:(id)arg1;
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2 orRecover:(CDUnknownBlockType)arg3;
- (id)inContext:(id)arg1 recover:(CDUnknownBlockType)arg2;
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2;
- (id)then:(CDUnknownBlockType)arg1 orRecover:(CDUnknownBlockType)arg2;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)then:(CDUnknownBlockType)arg1;
- (void)getResultWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly) struct _HMFFutureBlockOutcome outcomeIfSettled;
@property(readonly, getter=isPending) _Bool pending;
- (id)description;
- (id)timeout:(double)arg1;
- (id)ignoreOutcome;
- (id)ignoreResult;
- (id)ignoreErrors;
- (id)inContext:(id)arg1 finally:(CDUnknownBlockType)arg2;
- (id)finally:(CDUnknownBlockType)arg1;
- (_Bool)waitForResult:(id *)arg1 orError:(id *)arg2 withTimeout:(double)arg3;

@end
