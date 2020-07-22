//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <FileProvider/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchableItemError : PBCodable <NSCopying>
{
    long long _code;
    NSString *_customDomain;
    int _domain;
}

+ (id)errorFromString:(id)arg1;
+ (id)stringFromError:(id)arg1;
@property(retain, nonatomic) NSString *customDomain; // @synthesize customDomain=_customDomain;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) int domain; // @synthesize domain=_domain;
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
@property(readonly, nonatomic) _Bool hasCustomDomain;
- (int)StringAsDomain:(id)arg1;
- (id)domainAsString:(int)arg1;

@end

