//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBUserIgnoreFavoritesSuggestion : PBCodable <NSCopying>
{
    int _ignoreLocation;
    NSString *_ignoredFeedId;
    int _ignoredFeedType;
    int _suggestionPositionWhenIgnored;
    struct {
        unsigned int ignoreLocation:1;
        unsigned int ignoredFeedType:1;
        unsigned int suggestionPositionWhenIgnored:1;
    } _has;
}

@property(nonatomic) int suggestionPositionWhenIgnored; // @synthesize suggestionPositionWhenIgnored=_suggestionPositionWhenIgnored;
@property(retain, nonatomic) NSString *ignoredFeedId; // @synthesize ignoredFeedId=_ignoredFeedId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSuggestionPositionWhenIgnored;
@property(readonly, nonatomic) _Bool hasIgnoredFeedId;
@property(nonatomic) _Bool hasIgnoreLocation;
@property(nonatomic) int ignoreLocation; // @synthesize ignoreLocation=_ignoreLocation;
@property(nonatomic) _Bool hasIgnoredFeedType;
@property(nonatomic) int ignoredFeedType; // @synthesize ignoredFeedType=_ignoredFeedType;

@end

