//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariViewControllerDismissedEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _method;
    CDStruct_64f0786c _has;
}

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
- (int)StringAsMethod:(id)arg1;
- (id)methodAsString:(int)arg1;
@property(nonatomic) _Bool hasMethod;
@property(nonatomic) int method; // @synthesize method=_method;
@property(nonatomic) _Bool hasTimestamp;

@end

