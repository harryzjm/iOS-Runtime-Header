//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MPModelPlaylistEntryKind
{
    NSArray *_kinds;
}

+ (_Bool)supportsSecureCoding;
+ (id)kindWithKinds:(id)arg1;
+ (id)identityKind;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *kinds; // @synthesize kinds=_kinds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;

@end
