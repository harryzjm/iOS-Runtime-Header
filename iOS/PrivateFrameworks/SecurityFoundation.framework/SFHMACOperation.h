//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SFDigestOperation;

@interface SFHMACOperation
{
    id _hmacOperationInternal;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <SFDigestOperation> digestOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;
- (id)init;

@end
