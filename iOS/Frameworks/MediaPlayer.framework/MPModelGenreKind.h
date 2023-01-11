//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelAlbumKind;

@interface MPModelGenreKind
{
    MPModelAlbumKind *_albumKind;
}

+ (_Bool)supportsSecureCoding;
+ (id)kindWithAlbumKind:(id)arg1;
@property(readonly, copy, nonatomic) MPModelAlbumKind *albumKind; // @synthesize albumKind=_albumKind;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;

@end

