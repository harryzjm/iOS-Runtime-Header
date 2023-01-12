//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSString;

@interface DVTOneShotBlock : NSObject
{
    CDUnknownBlockType _callbackBlock;
}

+ (void)initialize;
+ (id)oneShotBlockWithMixedInvalidationAndCancellationTokens:(id)arg1;
+ (id)oneShotBlockWithCancellationTokens:(id)arg1;
+ (id)oneShotBlockWithInvalidateTokens:(id)arg1;
+ (id)oneShotBlockWithCallback:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@end

