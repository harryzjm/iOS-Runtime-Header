//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_group;

@interface NURenderTransaction : NSObject
{
    long long _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}

+ (void)withCurrentTransaction:(CDUnknownBlockType)arg1;
+ (void)group:(CDUnknownBlockType)arg1;
+ (void)commitAndNotifyOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)_commit:(id)arg1;
+ (void)commit;
+ (void)begin;
+ (id)assertCurrentTransaction;
+ (id)ensureCurrentTransaction;
+ (void)setCurrentTransaction:(id)arg1;
+ (id)currentTransaction;
- (void).cxx_destruct;
- (void)resetPendingRequests;
- (void)submitPendingRequests;
- (void)flush;
@property(readonly) NSArray *pendingRequests;
- (void)submitRequest:(id)arg1;
- (void)notifyCompletion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)commit;
- (_Bool)begin;
- (id)init;

@end
