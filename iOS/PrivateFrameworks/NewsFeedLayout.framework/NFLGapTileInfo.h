//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NSArray, NSString;

@interface NFLGapTileInfo : NSObject <NFLFeedTileInfo>
{
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSArray *_underlyingFeedElements;
}

@property(readonly, nonatomic) NSArray *underlyingFeedElements; // @synthesize underlyingFeedElements=_underlyingFeedElements;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long tileInfoType;
@property(readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property(readonly, nonatomic) _Bool bookmarkable;
@property(readonly, nonatomic) _Bool pageable;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 underlyingFeedElements:(id)arg3;
- (id)initWithGroupIdentifier:(id)arg1 underlyingFeedElements:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

