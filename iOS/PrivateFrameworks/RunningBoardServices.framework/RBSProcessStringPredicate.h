//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RBSProcessStringPredicate
{
    NSString *_identifier;
}

+ (_Bool)supportsRBSXPCSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)processPredicate;
- (_Bool)matchesProcess:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
