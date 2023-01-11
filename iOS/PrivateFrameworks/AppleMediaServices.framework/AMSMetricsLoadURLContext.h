//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSData, NSDictionary, NSError, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol AMSBagProtocol;

@interface AMSMetricsLoadURLContext : NSObject
{
    id <AMSBagProtocol> _bag;
    NSError *_error;
    AMSProcessInfo *_processInfo;
    NSData *_responseBody;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    NSURLSessionTaskMetrics *_taskMetrics;
    NSDictionary *_decodedResponseBody;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *decodedResponseBody; // @synthesize decodedResponseBody=_decodedResponseBody;
@property(retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSData *responseBody; // @synthesize responseBody=_responseBody;
@property(retain, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void)setBagContract:(id)arg1;
- (id)bagContract;
- (id)initWithTaskInfo:(id)arg1 serverPayload:(id)arg2;
- (id)initWithTask:(id)arg1 metrics:(id)arg2;

@end
