//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface ADKeyedParameterList : PBCodable <NSCopying>
{
    NSString *_key;
    NSMutableArray *_parameterLists;
}

+ (Class)parameterListType;
+ (id)options;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *parameterLists; // @synthesize parameterLists=_parameterLists;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)parameterListAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterListsCount;
- (void)addParameterList:(id)arg1;
- (void)clearParameterLists;

@end
