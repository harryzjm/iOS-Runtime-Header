//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PIOperationSubclass
{
    CDUnknownBlockType _finishBlock;
}

@property(readonly, retain, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)cleanup;
- (void)cancel;
- (void)execute;
- (void)_cleanup;
- (void)_didFinish;
- (CDUnknownBlockType)cancellationBlock;
- (CDUnknownBlockType)executionBlock;

@end

