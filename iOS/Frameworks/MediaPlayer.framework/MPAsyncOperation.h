//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <MediaPlayer/MPUserIdentityConsuming-Protocol.h>

@class ICUserIdentity, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _isExecuting;
    _Bool _isFinished;
    ICUserIdentity *_userIdentity;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void)finishWithError:(id)arg1;
- (void)finish;
- (void)execute;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
