//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EQKitEquation;

@interface TSWPEquationInfo
{
    EQKitEquation *_equation;
}

@property(retain, nonatomic) EQKitEquation *equation; // @synthesize equation=_equation;
- (Class)repClass;
- (Class)layoutClass;
- (void)dealloc;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 mathMLNode:(struct _xmlNode *)arg2 fromXMLDoc:(struct _xmlDoc *)arg3;

@end

