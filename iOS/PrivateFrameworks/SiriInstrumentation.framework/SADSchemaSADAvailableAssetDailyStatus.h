//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface SADSchemaSADAvailableAssetDailyStatus
{
    NSArray *_namespaceStatus;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *namespaceStatus; // @synthesize namespaceStatus=_namespaceStatus;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)namespaceStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)namespaceStatusCount;
- (void)addNamespaceStatus:(id)arg1;
- (void)clearNamespaceStatus;

@end
