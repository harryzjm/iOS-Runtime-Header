//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface EQKitMathMLMStack
{
    NSArray *mChildren;
    int mAlign;
}

- (_Bool)isBaseFontNameUsed;
- (int)schemataAlign;
- (id)schemataChildren;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (const void *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

