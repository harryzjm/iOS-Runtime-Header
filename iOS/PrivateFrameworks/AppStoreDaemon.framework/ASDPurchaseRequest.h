//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDPurchaseRequestOptions;

@interface ASDPurchaseRequest
{
}

+ (long long)requestType;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) ASDPurchaseRequestOptions *options; // @dynamic options;

@end

