//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/DAActionConsumer-Protocol.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer>
{
    NSConditionLock *_doneCondition;
    _Bool _shouldRetryRequest;
    _Bool _alwaysReportFailures;
}

- (void)dealloc;
- (_Bool)shouldRetryRequest;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)waitUntilDone;
- (_Bool)waitUntilDoneBeforeDate:(id)arg1;
- (void)setDone:(_Bool)arg1;
- (id)initWithAlwaysReportFailures:(_Bool)arg1;
- (id)init;

@end
