//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _SFAESKeySpecifier;

@interface _SFAESKey
{
    id _aesKeyInternal;
}

- (void).cxx_destruct;
- (id)initRandomKeyWithSpecifier:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) _SFAESKeySpecifier *keySpecifier; // @dynamic keySpecifier;

@end

