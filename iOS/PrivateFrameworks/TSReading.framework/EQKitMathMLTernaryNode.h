//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/EQKitMathMLNode-Protocol.h>

@class EQKitMathMLNode;

@interface EQKitMathMLTernaryNode <EQKitMathMLNode>
{
    EQKitMathMLNode *mFirst;
    EQKitMathMLNode *mSecond;
    EQKitMathMLNode *mThird;
}

- (_Bool)isBaseFontNameUsed;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (void)dealloc;
- (id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3;
- (id)init;

@end
