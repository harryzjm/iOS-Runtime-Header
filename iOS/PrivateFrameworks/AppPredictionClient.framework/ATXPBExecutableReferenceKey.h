//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class ATXPBAction, ATXPBHeroAppPrediction, ATXPBInfoSuggestion, NSMutableArray, NSString;

@interface ATXPBExecutableReferenceKey : PBCodable <NSCopying>
{
    ATXPBAction *_executableAction;
    ATXPBHeroAppPrediction *_executableHeroApp;
    ATXPBInfoSuggestion *_executableInfoSuggestion;
    NSString *_executableString;
    int _executableType;
    NSMutableArray *_references;
}

+ (Class)referencesType;
- (void).cxx_destruct;
@property(retain, nonatomic) ATXPBInfoSuggestion *executableInfoSuggestion; // @synthesize executableInfoSuggestion=_executableInfoSuggestion;
@property(retain, nonatomic) NSMutableArray *references; // @synthesize references=_references;
@property(retain, nonatomic) ATXPBHeroAppPrediction *executableHeroApp; // @synthesize executableHeroApp=_executableHeroApp;
@property(retain, nonatomic) ATXPBAction *executableAction; // @synthesize executableAction=_executableAction;
@property(retain, nonatomic) NSString *executableString; // @synthesize executableString=_executableString;
@property(nonatomic) int executableType; // @synthesize executableType=_executableType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasExecutableInfoSuggestion;
- (id)referencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)referencesCount;
- (void)addReferences:(id)arg1;
- (void)clearReferences;
@property(readonly, nonatomic) _Bool hasExecutableHeroApp;
@property(readonly, nonatomic) _Bool hasExecutableAction;
@property(readonly, nonatomic) _Bool hasExecutableString;
- (int)StringAsExecutableType:(id)arg1;
- (id)executableTypeAsString:(int)arg1;

@end
