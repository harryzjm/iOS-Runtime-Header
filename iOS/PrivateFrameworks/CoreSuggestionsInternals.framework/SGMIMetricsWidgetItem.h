//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@interface SGMIMetricsWidgetItem : PBCodable <NSCopying>
{
    unsigned long long _messageId;
    double _saliencyScore;
    _Bool _isRead;
    struct {
        unsigned int messageId:1;
        unsigned int saliencyScore:1;
        unsigned int isRead:1;
    } _has;
}

@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) double saliencyScore; // @synthesize saliencyScore=_saliencyScore;
@property(nonatomic) unsigned long long messageId; // @synthesize messageId=_messageId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsRead;
@property(nonatomic) _Bool hasSaliencyScore;
@property(nonatomic) _Bool hasMessageId;

@end
