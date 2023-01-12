//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class BMPBRankableSocialHighlight, NSString;

@interface BMPBSocialHighlightFeedbackEvent : PBCodable <NSCopying>
{
    double _feedbackCreationSecondsSinceReferenceDate;
    NSString *_clientIdentifier;
    NSString *_clientVariant;
    int _feedbackType;
    BMPBRankableSocialHighlight *_highlight;
    struct {
        unsigned int feedbackCreationSecondsSinceReferenceDate:1;
        unsigned int feedbackType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientVariant; // @synthesize clientVariant=_clientVariant;
@property(retain, nonatomic) BMPBRankableSocialHighlight *highlight; // @synthesize highlight=_highlight;
@property(nonatomic) double feedbackCreationSecondsSinceReferenceDate; // @synthesize feedbackCreationSecondsSinceReferenceDate=_feedbackCreationSecondsSinceReferenceDate;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasClientVariant;
@property(readonly, nonatomic) _Bool hasHighlight;
@property(nonatomic) _Bool hasFeedbackCreationSecondsSinceReferenceDate;
- (int)StringAsFeedbackType:(id)arg1;
- (id)feedbackTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedbackType;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(readonly, nonatomic) _Bool hasClientIdentifier;

@end
