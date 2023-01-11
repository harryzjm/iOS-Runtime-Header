//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableIndexSet, PKAssertion;
@protocol OS_dispatch_queue;

@interface PKAutomaticPassPresentationSuppressor : NSObject
{
    PKAssertion *_suppressionAssertion;
    NSMutableIndexSet *_suppressionRequestTokens;
    NSMutableIndexSet *_backgrounedSuppressionIdentifiers;
    NSDate *_backgroundedDate;
    unsigned long long _nextRequestToken;
    NSObject<OS_dispatch_queue> *_suppressorQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_acquireSuppressionAssertionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
@property(readonly, nonatomic) _Bool isSuppressing;
- (void)endSuppressionWithRequestToken:(unsigned long long)arg1;
- (unsigned long long)requestSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

