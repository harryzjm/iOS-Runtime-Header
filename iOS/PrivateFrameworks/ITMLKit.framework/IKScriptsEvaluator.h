//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/ISStoreURLOperationDelegate-Protocol.h>
#import <ITMLKit/NSURLConnectionDataDelegate-Protocol.h>

@class IKAppContext, JSManagedValue, NSArray, NSMutableArray, NSNumber, NSString;

@interface IKScriptsEvaluator : NSObject <ISStoreURLOperationDelegate, NSURLConnectionDataDelegate>
{
    _Bool _isJingleRequest;
    NSArray *_scripts;
    IKAppContext *_appContext;
    JSManagedValue *_callback;
    NSMutableArray *_records;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) JSManagedValue *callback; // @synthesize callback=_callback;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSArray *scripts; // @synthesize scripts=_scripts;
@property(nonatomic) _Bool isJingleRequest; // @synthesize isJingleRequest=_isJingleRequest;
- (void).cxx_destruct;
- (void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(_Bool)arg3;
- (void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)evaluate;
- (id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

