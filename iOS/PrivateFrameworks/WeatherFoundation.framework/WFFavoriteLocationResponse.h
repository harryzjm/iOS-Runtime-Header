//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WFFavoriteLocationResponse
{
    NSArray *_favoriteLocations;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSArray *favoriteLocations; // @synthesize favoriteLocations=_favoriteLocations;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 favorites:(id)arg2;

@end

