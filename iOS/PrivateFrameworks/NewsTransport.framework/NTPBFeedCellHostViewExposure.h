//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBFeedCellHostViewExposure : PBCodable <NSCopying>
{
    int _areaPresentationReason;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    int _feedCellHostType;
    NSString *_topicFeedId;
    int _userAction;
    _Bool _pickFavsButtonExposed;
    struct {
        unsigned int areaPresentationReason:1;
        unsigned int feedCellHostType:1;
        unsigned int userAction:1;
        unsigned int pickFavsButtonExposed:1;
    } _has;
}

@property(nonatomic) _Bool pickFavsButtonExposed; // @synthesize pickFavsButtonExposed=_pickFavsButtonExposed;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *topicFeedId; // @synthesize topicFeedId=_topicFeedId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;
@property(nonatomic) _Bool hasPickFavsButtonExposed;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(readonly, nonatomic) _Bool hasTopicFeedId;
- (int)StringAsAreaPresentationReason:(id)arg1;
- (id)areaPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasAreaPresentationReason;
@property(nonatomic) int areaPresentationReason; // @synthesize areaPresentationReason=_areaPresentationReason;
- (int)StringAsFeedCellHostType:(id)arg1;
- (id)feedCellHostTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellHostType;
@property(nonatomic) int feedCellHostType; // @synthesize feedCellHostType=_feedCellHostType;

@end

