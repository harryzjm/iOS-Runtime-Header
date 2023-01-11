//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTrendingConfig : PBCodable <NSCopying>
{
    NSString *_fallbackLanguageTag;
    NSMutableArray *_languageConfigs;
}

+ (Class)languageConfigsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *languageConfigs; // @synthesize languageConfigs=_languageConfigs;
@property(retain, nonatomic) NSString *fallbackLanguageTag; // @synthesize fallbackLanguageTag=_fallbackLanguageTag;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)languageConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageConfigsCount;
- (void)addLanguageConfigs:(id)arg1;
- (void)clearLanguageConfigs;
@property(readonly, nonatomic) _Bool hasFallbackLanguageTag;

@end
