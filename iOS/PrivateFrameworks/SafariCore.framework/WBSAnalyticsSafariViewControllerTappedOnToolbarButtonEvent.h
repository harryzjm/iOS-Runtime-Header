//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariViewControllerTappedOnToolbarButtonEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _button;
    _Bool _usedLongTap;
    CDStruct_9b2e609f _has;
}

@property(nonatomic) _Bool usedLongTap; // @synthesize usedLongTap=_usedLongTap;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUsedLongTap;
- (int)StringAsButton:(id)arg1;
- (id)buttonAsString:(int)arg1;
@property(nonatomic) _Bool hasButton;
@property(nonatomic) int button; // @synthesize button=_button;
@property(nonatomic) _Bool hasTimestamp;

@end

