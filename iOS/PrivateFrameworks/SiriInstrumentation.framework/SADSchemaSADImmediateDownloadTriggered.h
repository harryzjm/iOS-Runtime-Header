//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SADSchemaSADImmediateDownloadTriggered
{
    int _locale;
    _Bool _existingAssets;
    unsigned int _retryCount;
    struct {
        unsigned int locale:1;
        unsigned int existingAssets:1;
        unsigned int retryCount:1;
    } _has;
}

@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool existingAssets; // @synthesize existingAssets=_existingAssets;
@property(nonatomic) int locale; // @synthesize locale=_locale;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasRetryCount;
@property(nonatomic) _Bool hasExistingAssets;
@property(nonatomic) _Bool hasLocale;

@end
