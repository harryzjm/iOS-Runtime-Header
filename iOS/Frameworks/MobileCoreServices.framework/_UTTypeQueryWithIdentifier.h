//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTTypeQueryWithIdentifier
{
    NSString *_identifier;
    _Bool _dynamic;
    _Bool _valid;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_canResolveLocallyWithoutMappingDatabase;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)getLocallyResolvedType:(id *)arg1 orErrorWithoutMappingDatabase:(id *)arg2;

@end
