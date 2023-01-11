//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsFeedLayout/NFCopying-Protocol.h>
#import <NewsFeedLayout/NSObject-Protocol.h>

@class NFLHeadlineTileInfo, NSArray, NSString;
@protocol FCHeadlineProviding, NFLFeedTileInfo;

@protocol NFLFeedTileInfo <NSObject, NFCopying>
@property(readonly, copy, nonatomic) NSString *groupIdentifier;
@property(readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property(readonly, nonatomic) NSArray *underlyingFeedElements;
@property(readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property(readonly, nonatomic, getter=isSelectable) _Bool selectable;
@property(readonly, nonatomic) _Bool pageable;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned long long tileInfoType;
- (id <NFLFeedTileInfo>)updatedTileInfoWithNewHeadline:(id <FCHeadlineProviding>)arg1;
@end
