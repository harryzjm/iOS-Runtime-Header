//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPRequestCancellationToken-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>

@class NSArray, NSBlockOperation, NSError, NSOperationQueue, NSString;

@interface MPRequest : NSObject <MPRequestCancellationToken, NSCopying>
{
    NSString *_label;
    long long _qualityOfService;
    double _timeoutInterval;
    NSOperationQueue *_calloutQueue;
    NSBlockOperation *_completionOperation;
    NSError *_cancelationError;
    NSOperationQueue *_queue;
    NSArray *_middlewareClasses;
}

+ (double)expectedMaximumResponseTimeInterval;
+ (Class)responseClass;
@property(copy, nonatomic) NSArray *middlewareClasses; // @synthesize middlewareClasses=_middlewareClasses;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSError *cancelationError; // @synthesize cancelationError=_cancelationError;
@property(readonly, nonatomic) NSBlockOperation *completionOperation; // @synthesize completionOperation=_completionOperation;
@property(readonly, nonatomic) NSOperationQueue *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)cancel;
- (void)_performWithCompletion:(CDUnknownBlockType)arg1;
- (id)performWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForResponseWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

