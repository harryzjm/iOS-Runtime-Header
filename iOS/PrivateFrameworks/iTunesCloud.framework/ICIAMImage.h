//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

@interface ICIAMImage : PBCodable <NSCopying>
{
    unsigned int _height;
    NSString *_identifier;
    NSString *_uRL;
    unsigned int _width;
    struct {
        unsigned int height:1;
        unsigned int width:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) _Bool hasWidth;
@property(readonly, nonatomic) _Bool hasURL;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
