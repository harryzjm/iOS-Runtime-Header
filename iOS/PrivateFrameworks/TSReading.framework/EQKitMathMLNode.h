//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSReading/EQKitLayoutNode-Protocol.h>

@class NSString;
@protocol EQKitLayoutNode;

@interface EQKitMathMLNode : NSObject <EQKitLayoutNode>
{
    id <EQKitLayoutNode> mParent;
}

@property(nonatomic) id <EQKitLayoutNode> parent; // @synthesize parent=mParent;
- (_Bool)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (int)isOperatorPaddingRequired;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (long long)scriptLevelWithBase:(long long)arg1;
- (_Bool)isBaseFontNameUsed;
- (_Bool)isSpaceLike;
- (_Bool)isNumber;
- (id)layoutStyleNode;
- (struct Schemata)layoutSchemata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
