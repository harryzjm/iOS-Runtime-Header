//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSOperationQueue, NSString;

@interface _CNOperationQueueScheduler : NSObject <CNScheduler>
{
    NSOperationQueue *_queue;
}

+ (id)operationWithQualityOfService:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (double)timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1 qualityOfService:(unsigned long long)arg2;
- (id)initWithQualityOfService:(unsigned long long)arg1;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

