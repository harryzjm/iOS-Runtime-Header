//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFFuture.h"

__attribute__((visibility("hidden")))
@interface HMFFulfilledFuture : HMFFuture
{
    id _value;
}

- (void).cxx_destruct;
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2 orRecover:(CDUnknownBlockType)arg3;
- (id)then:(CDUnknownBlockType)arg1 orRecover:(CDUnknownBlockType)arg2;
- (id)inContext:(id)arg1 recover:(CDUnknownBlockType)arg2;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2;
- (id)then:(CDUnknownBlockType)arg1;
- (void)getResultWithCompletion:(CDUnknownBlockType)arg1;
- (struct _HMFFutureBlockOutcome)outcomeIfSettled;
- (_Bool)isPending;

@end

