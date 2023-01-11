//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSTransactionObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver>
{
    NSMutableArray *_willBeginBlocks;
    NSMutableArray *_didBeginBlocks;
    NSMutableArray *_didFinishWorkBlocks;
    NSMutableArray *_didCompleteBlocks;
}

- (void).cxx_destruct;
- (void)transactionDidComplete:(id)arg1;
- (void)transactionDidFinishWork:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (void)transactionWillBegin:(id)arg1;
- (void)addTransactionDidCompleteBlock:(CDUnknownBlockType)arg1;
- (void)addTransactionDidFinishWorkBlock:(CDUnknownBlockType)arg1;
- (void)addTransactionDidBeginBlock:(CDUnknownBlockType)arg1;
- (void)addTransactionWillBeginBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

