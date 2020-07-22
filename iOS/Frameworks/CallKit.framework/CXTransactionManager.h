//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol CXTransactionManagerDelegate, OS_dispatch_queue;

@interface CXTransactionManager : NSObject
{
    id <CXTransactionManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_outstandingTransactionGroups;
}

@property(retain, nonatomic) NSMutableSet *outstandingTransactionGroups; // @synthesize outstandingTransactionGroups=_outstandingTransactionGroups;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CXTransactionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_timeoutReachedForAction:(id)arg1 callSource:(id)arg2;
- (void)_setUpTimeoutForAction:(id)arg1 callSource:(id)arg2;
- (void)failOutstandingActionsForCallWithUUID:(id)arg1;
- (void)updateWithCompletedAction:(id)arg1;
- (void)addOutstandingTransactionGroup:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end

