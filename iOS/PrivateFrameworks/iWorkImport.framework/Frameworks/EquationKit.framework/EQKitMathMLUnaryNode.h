//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EQKitMathMLNode;

@interface EQKitMathMLUnaryNode
{
    EQKitMathMLNode *mChild;
}

- (void)dealloc;
- (_Bool)isBaseFontNameUsed;
- (const void *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithChildren:(id)arg1;
- (id)initWithChild:(id)arg1;
- (id)init;

@end

