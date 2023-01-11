//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RBSLegacyAttribute
{
    unsigned long long _reason;
    unsigned long long _requestedReason;
    unsigned long long _flags;
}

+ (id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long flags;
@property(readonly, nonatomic) unsigned long long requestedReason;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
