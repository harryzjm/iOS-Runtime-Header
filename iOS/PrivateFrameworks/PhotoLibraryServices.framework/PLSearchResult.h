//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PSIGroupResult;

@interface PLSearchResult : NSObject
{
    PSIGroupResult *_groupResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PSIGroupResult *groupResult; // @synthesize groupResult=_groupResult;
- (_Bool)isImplicitlyTokenized;
- (_Bool)isMatchedByIdentifierAtIndex:(long long)arg1;
- (_Bool)isContentStringTextSearchableAtIndex:(long long)arg1;
- (id)matchRangesAtIndex:(long long)arg1;
- (id)tokensAtIndex:(long long)arg1;
- (long long)categoryAtIndex:(long long)arg1;
- (unsigned long long)groupCount;
@property(readonly) NSString *owningContentString;
@property(readonly, nonatomic) NSString *groupDescription;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, nonatomic) NSString *keyAssetUUID;
@property(readonly, nonatomic) NSString *transientToken;
@property(readonly, nonatomic) NSArray *matchRanges;
@property(readonly, nonatomic) NSArray *lookupIdentifiers;
@property(readonly, nonatomic) NSArray *contentStrings;
@property(readonly, nonatomic) NSArray *searchTokens;
@property(readonly, nonatomic) unsigned long long categoryMask;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithGroupResult:(id)arg1;

@end
