//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSTWrappedFormula
{
    int _functionIndex;
}

+ (_Bool)storageExceedsMaxFormulaLength:(id)arg1;
@property(nonatomic) int functionIndex; // @synthesize functionIndex=_functionIndex;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(CDUnknownBlockType)arg2;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
