//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTResult, NSArray;

@interface CUTAsyncReducer : NSObject
{
    NSArray *_input;
    CUTResult *_result;
    CDUnknownBlockType _reducerBlock;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType reducerBlock; // @synthesize reducerBlock=_reducerBlock;
@property(retain, nonatomic) CUTResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSArray *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (void)_reduceWithPending:(id)arg1 visited:(id)arg2 currentResult:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_completeWithResult:(id)arg1;
- (void)reduceWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithInput:(id)arg1 initialValue:(id)arg2;

@end

