//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/EQKitLayoutSchemataStackLine-Protocol.h>
#import <iWorkImport/EQKitMathMLNode-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMStackLine <EQKitMathMLNode, EQKitLayoutSchemataStackLine>
{
}

- (unsigned long long)schemataThickness;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

