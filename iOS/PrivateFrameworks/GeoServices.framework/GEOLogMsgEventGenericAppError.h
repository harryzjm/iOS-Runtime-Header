//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgEventGenericAppError : PBCodable <NSCopying>
{
    long long _appErrorCode;
    NSString *_appErrorDomain;
    struct {
        unsigned int appErrorCode:1;
    } _has;
}

@property(nonatomic) long long appErrorCode; // @synthesize appErrorCode=_appErrorCode;
@property(retain, nonatomic) NSString *appErrorDomain; // @synthesize appErrorDomain=_appErrorDomain;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAppErrorCode;
@property(readonly, nonatomic) _Bool hasAppErrorDomain;

@end

