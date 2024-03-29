//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest, CNObservable, NSString;
@protocol CNDataMapper;

__attribute__((visibility("hidden")))
@interface CNContactFetchRequestExecutorPredicateEvaluator : NSObject
{
    CNContactFetchRequest *_fetchRequest;
    id <CNDataMapper> _dataMapper;
    CNObservable *_observable;
}

- (void).cxx_destruct;
- (id)copyFetchRequestWithPredicate:(id)arg1;
- (id)evaluateSubpredicate:(id)arg1;
- (void)visitFalsePredicate:(id)arg1;
- (void)visitTruePredicate:(id)arg1;
- (void)visitNSPredicate:(id)arg1;
- (void)visitNotPredicate:(id)arg1;
- (void)visitAndPredicate:(id)arg1;
- (void)visitOrPredicate:(id)arg1;
- (void)visitNSCompoundPredicate:(id)arg1;
- (void)visitCNPredicate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

