//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSData, NSString;

@interface SYErrorInfo : PBCodable <NSCopying>
{
    int _code;
    NSString *_domain;
    NSData *_userInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSData *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
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
@property(readonly, nonatomic) _Bool hasUserInfo;
- (id)_usefulDescription;
- (id)initWithError:(id)arg1;

@end

