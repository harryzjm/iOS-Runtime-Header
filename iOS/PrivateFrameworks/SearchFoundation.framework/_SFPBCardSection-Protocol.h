//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBAbstractCommand, _SFPBCard, _SFPBCardSectionValue;

@protocol _SFPBCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSArray *commands;
@property(retain, nonatomic) _SFPBCard *nextCard;
@property(retain, nonatomic) _SFPBCardSectionValue *value;
@property(nonatomic) int type;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)parameterKeyPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeyPathsCount;
- (void)addParameterKeyPaths:(NSString *)arg1;
- (void)clearParameterKeyPaths;
- (_SFPBAbstractCommand *)commandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandsCount;
- (void)addCommands:(_SFPBAbstractCommand *)arg1;
- (void)clearCommands;
@end

