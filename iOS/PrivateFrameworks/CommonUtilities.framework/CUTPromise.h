//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CUTPromise
{
}

+ (id)all:(id)arg1;
+ (id)fulfilledPromiseWithValue:(id)arg1;
+ (id)failedPromiseWithError:(id)arg1;
- (id)then:(CDUnknownBlockType)arg1;
- (void)registerResultBlock:(CDUnknownBlockType)arg1;

@end
