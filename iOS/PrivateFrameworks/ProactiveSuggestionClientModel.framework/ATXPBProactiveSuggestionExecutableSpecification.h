//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveSuggestionClientModel/NSCopying-Protocol.h>

@class NSData, NSString;

@interface ATXPBProactiveSuggestionExecutableSpecification : PBCodable <NSCopying>
{
    unsigned long long _executableObjectHash;
    NSData *_executable;
    NSString *_executableClassString;
    NSString *_executableDescription;
    NSString *_executableIdentifier;
    int _executableType;
    struct {
        unsigned int executableObjectHash:1;
        unsigned int executableType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *executableIdentifier; // @synthesize executableIdentifier=_executableIdentifier;
@property(retain, nonatomic) NSString *executableDescription; // @synthesize executableDescription=_executableDescription;
@property(retain, nonatomic) NSString *executableClassString; // @synthesize executableClassString=_executableClassString;
@property(nonatomic) unsigned long long executableObjectHash; // @synthesize executableObjectHash=_executableObjectHash;
@property(retain, nonatomic) NSData *executable; // @synthesize executable=_executable;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsExecutableType:(id)arg1;
- (id)executableTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasExecutableType;
@property(nonatomic) int executableType; // @synthesize executableType=_executableType;
@property(readonly, nonatomic) _Bool hasExecutableIdentifier;
@property(readonly, nonatomic) _Bool hasExecutableDescription;
@property(readonly, nonatomic) _Bool hasExecutableClassString;
@property(nonatomic) _Bool hasExecutableObjectHash;
@property(readonly, nonatomic) _Bool hasExecutable;

@end
