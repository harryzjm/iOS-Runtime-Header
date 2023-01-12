//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol KGMutableGraphImplementation, OS_dispatch_queue;

@interface KGMutableGraph
{
    NSObject<OS_dispatch_queue> *_transactionQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
- (_Bool)performChangesAndWait:(id)arg1 error:(id *)arg2;
- (_Bool)_performChangesAndWait:(id)arg1 error:(id *)arg2;
- (_Bool)_applyEdgeChangeRequests:(id)arg1 error:(id *)arg2;
- (_Bool)_applyNodeChangeRequests:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) id <KGMutableGraphImplementation> mutableImplementation;
- (id)initWithMutableImplementation:(id)arg1;

@end
