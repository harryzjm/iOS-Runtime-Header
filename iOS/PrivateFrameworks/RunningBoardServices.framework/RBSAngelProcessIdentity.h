//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSAngelProcessIdentity
{
    NSString *_angelJobLabel;
}

- (void).cxx_destruct;
- (id)angelJobLabel;
- (_Bool)isAnonymous;
- (_Bool)isAngel;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)debugDescription;
- (_Bool)_matchesIdentity:(id)arg1;
- (id)copyWithAuid:(unsigned int)arg1;
- (id)_initAngelWithJobLabel:(id)arg1;

@end
