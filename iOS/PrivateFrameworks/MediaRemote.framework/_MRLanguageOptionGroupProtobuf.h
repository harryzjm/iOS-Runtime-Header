//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, _MRLanguageOptionProtobuf;

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying>
{
    _MRLanguageOptionProtobuf *_defaultLanguageOption;
    NSMutableArray *_languageOptions;
    _Bool _allowEmptySelection;
    struct {
        unsigned int allowEmptySelection:1;
    } _has;
}

+ (Class)languageOptionsType;
@property(retain, nonatomic) NSMutableArray *languageOptions; // @synthesize languageOptions=_languageOptions;
@property(retain, nonatomic) _MRLanguageOptionProtobuf *defaultLanguageOption; // @synthesize defaultLanguageOption=_defaultLanguageOption;
@property(nonatomic) _Bool allowEmptySelection; // @synthesize allowEmptySelection=_allowEmptySelection;
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
- (id)languageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageOptionsCount;
- (void)addLanguageOptions:(id)arg1;
- (void)clearLanguageOptions;
@property(readonly, nonatomic) _Bool hasDefaultLanguageOption;
@property(nonatomic) _Bool hasAllowEmptySelection;

@end

