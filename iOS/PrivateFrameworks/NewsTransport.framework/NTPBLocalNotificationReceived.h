//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBLocalNotificationReceived : PBCodable <NSCopying>
{
    int _localNotificationNumberReceived;
    struct {
        unsigned int localNotificationNumberReceived:1;
    } _has;
}

@property(nonatomic) int localNotificationNumberReceived; // @synthesize localNotificationNumberReceived=_localNotificationNumberReceived;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLocalNotificationNumberReceived;

@end

