//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNInstantMessageAddress;

__attribute__((visibility("hidden")))
@interface CNInstantMessageAddressContactPredicate
{
    CNInstantMessageAddress *_imAddress;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) CNInstantMessageAddress *imAddress; // @synthesize imAddress=_imAddress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithInstantMessageAddress:(id)arg1;

@end

