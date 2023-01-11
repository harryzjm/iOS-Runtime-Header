//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoStandalonePaymentSetupProductImageAssetURLs : PBCodable <NSCopying>
{
    NSString *_digitalCardImageUrl;
    NSString *_logoImageUrl;
    NSString *_thumbnailImageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *logoImageUrl; // @synthesize logoImageUrl=_logoImageUrl;
@property(retain, nonatomic) NSString *thumbnailImageUrl; // @synthesize thumbnailImageUrl=_thumbnailImageUrl;
@property(retain, nonatomic) NSString *digitalCardImageUrl; // @synthesize digitalCardImageUrl=_digitalCardImageUrl;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLogoImageUrl;
@property(readonly, nonatomic) _Bool hasThumbnailImageUrl;
@property(readonly, nonatomic) _Bool hasDigitalCardImageUrl;

@end
