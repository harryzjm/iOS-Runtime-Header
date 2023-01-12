//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSBusinessLinkContent : PBCodable
{
    NSString *_language;
    NSString *_subtitle;
    NSString *_title;
    _Bool _isDefault;
    CDStruct_d3bb80d3 _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsDefault;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasLanguage;

@end

