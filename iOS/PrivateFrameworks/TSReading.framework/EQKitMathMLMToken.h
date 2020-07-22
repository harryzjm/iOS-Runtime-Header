//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/EQKitFontStyling-Protocol.h>
#import <TSReading/EQKitLayoutSchemataToken-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class EQKitMathMLTokenContent, NSString;

@interface EQKitMathMLMToken <EQKitMathMLNode, EQKitFontStyling, EQKitLayoutSchemataToken>
{
    struct {
        unsigned int mType:2;
    } mFlags;
    union {
        unsigned int mChar;
        NSString *mString;
        EQKitMathMLTokenContent *mContent;
    } mContent;
}

- (id)schemataTokenString;
- (id)schemataFontStyling;
- (_Bool)isNumber;
- (id)fontStyling;
@property(readonly, copy) NSString *description;
- (unsigned int)schemataUnicharOrNul;
- (int)scriptContext;
- (int)scriptVariant;
- (void)dealloc;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithContent:(id)arg1;
- (id)initWithString:(id)arg1 environment:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
