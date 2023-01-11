//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AMSLazyPromise
{
    _Bool _executedBlock;
    CDUnknownBlockType _block;
    double _timeout;
}

- (void).cxx_destruct;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool executedBlock; // @synthesize executedBlock=_executedBlock;
- (_Bool)_runBlock;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)resultWithError:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (id)initWithTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
