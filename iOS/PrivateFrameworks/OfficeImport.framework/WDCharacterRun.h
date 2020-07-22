//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableString, WDCharacterProperties;

@interface WDCharacterRun
{
    WDCharacterProperties *mProperties;
    NSMutableString *mString;
    _Bool mBinaryWriterContentFlag;
}

- (id)description;
- (_Bool)isEmpty;
- (void)copyPropertiesFrom:(id)arg1;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)initWithParagraph:(id)arg1 string:(id)arg2;
- (id)initWithParagraph:(id)arg1;
- (void)clearString;
- (void)appendString:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)clearProperties;
- (void)setPropertiesForDocument;
- (id)properties;
- (int)runType;
- (void)dealloc;
- (void)setBinaryWriterContentFlag:(_Bool)arg1;
- (_Bool)binaryWriterContentFlag;

@end

