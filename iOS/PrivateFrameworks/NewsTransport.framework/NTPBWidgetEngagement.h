//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBWidgetEngagement : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSMutableArray *_otherVisibleSections;
    NSString *_sourceChannelId;
    int _widgetArticleCount;
    int _widgetArticleCountInSection;
    int _widgetArticleRank;
    int _widgetArticleRankInSection;
    int _widgetEngagementType;
    int _widgetSectionDisplayRank;
    NSString *_widgetSectionId;
    NSString *_widgetUserId;
    int _widgetVideoPresentationReason;
    CDStruct_80f27018 _has;
}

+ (Class)otherVisibleSectionsType;
@property(retain, nonatomic) NSString *widgetUserId; // @synthesize widgetUserId=_widgetUserId;
@property(nonatomic) int widgetArticleCountInSection; // @synthesize widgetArticleCountInSection=_widgetArticleCountInSection;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSMutableArray *otherVisibleSections; // @synthesize otherVisibleSections=_otherVisibleSections;
@property(nonatomic) int widgetArticleCount; // @synthesize widgetArticleCount=_widgetArticleCount;
@property(nonatomic) int widgetArticleRank; // @synthesize widgetArticleRank=_widgetArticleRank;
@property(nonatomic) int widgetArticleRankInSection; // @synthesize widgetArticleRankInSection=_widgetArticleRankInSection;
@property(nonatomic) int widgetSectionDisplayRank; // @synthesize widgetSectionDisplayRank=_widgetSectionDisplayRank;
@property(retain, nonatomic) NSString *widgetSectionId; // @synthesize widgetSectionId=_widgetSectionId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasWidgetUserId;
@property(nonatomic) _Bool hasWidgetArticleCountInSection;
- (int)StringAsWidgetVideoPresentationReason:(id)arg1;
- (id)widgetVideoPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasWidgetVideoPresentationReason;
@property(nonatomic) int widgetVideoPresentationReason; // @synthesize widgetVideoPresentationReason=_widgetVideoPresentationReason;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
- (id)otherVisibleSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)otherVisibleSectionsCount;
- (void)addOtherVisibleSections:(id)arg1;
- (void)clearOtherVisibleSections;
@property(nonatomic) _Bool hasWidgetArticleCount;
@property(nonatomic) _Bool hasWidgetArticleRank;
@property(nonatomic) _Bool hasWidgetArticleRankInSection;
@property(nonatomic) _Bool hasWidgetSectionDisplayRank;
@property(readonly, nonatomic) _Bool hasWidgetSectionId;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasWidgetEngagementType;
@property(nonatomic) int widgetEngagementType; // @synthesize widgetEngagementType=_widgetEngagementType;

@end

