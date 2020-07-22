//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NSArray, NSString;

@interface NFLAggregateTileInfo : NSObject <NFLFeedTileInfo>
{
    NSString *_identifier;
    unsigned long long _tileInfoType;
    NSString *_groupIdentifier;
    NSArray *_underlyingTileInfos;
}

@property(readonly, copy, nonatomic) NSArray *underlyingTileInfos; // @synthesize underlyingTileInfos=_underlyingTileInfos;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) unsigned long long tileInfoType; // @synthesize tileInfoType=_tileInfoType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property(readonly, nonatomic) _Bool bookmarkable;
@property(readonly, nonatomic) _Bool pageable;
- (id)underlyingTileInfoForID:(id)arg1;
- (_Bool)underlyingTileInfosContainsTileInfoForID:(id)arg1;
@property(readonly, nonatomic) NSArray *underlyingFeedElements;
- (id)initWithGroupIdentifier:(id)arg1 underlyingTileInfos:(id)arg2;
- (id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 underlyingTileInfos:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
