//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface ADConfigurationRequest : PBRequest <NSCopying>
{
    NSMutableArray *_currentConfigurations;
    NSData *_iAdID;
}

+ (Class)currentConfigurationType;
+ (id)options;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
@property(retain, nonatomic) NSMutableArray *currentConfigurations; // @synthesize currentConfigurations=_currentConfigurations;
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
@property(readonly, nonatomic) _Bool hasIAdID;
- (id)currentConfigurationAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentConfigurationsCount;
- (void)addCurrentConfiguration:(id)arg1;
- (void)clearCurrentConfigurations;

@end

