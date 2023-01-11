//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOComponentAction : PBCodable <NSCopying>
{
    CDStruct_95bda58d _actions;
    int _component;
    _Bool _handleLocally;
    struct {
        unsigned int has_component:1;
        unsigned int has_handleLocally:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHandleLocally;
@property(nonatomic) _Bool handleLocally;
- (int)StringAsActions:(id)arg1;
- (id)actionsAsString:(int)arg1;
- (void)setActions:(int *)arg1 count:(unsigned long long)arg2;
- (int)actionsAtIndex:(unsigned long long)arg1;
- (void)addActions:(int)arg1;
- (void)clearActions;
@property(readonly, nonatomic) int *actions;
@property(readonly, nonatomic) unsigned long long actionsCount;
- (int)StringAsComponent:(id)arg1;
- (id)componentAsString:(int)arg1;
@property(nonatomic) _Bool hasComponent;
@property(nonatomic) int component;
- (void)dealloc;

@end
