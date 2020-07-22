//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeMapper
{
    unsigned long long mChildCount;
    OADOrientedBounds *mDiagramShapeBounds;
    NSString *mIdentifier;
    float mDefaultFontSize;
    int mMaxMappableTreeDepth;
    float mDefaultScale;
}

- (void).cxx_destruct;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3;
- (struct CGSize)textSizeForShapeSize:(struct CGSize)arg1;
- (void)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setDefaultFonSize;
- (float)defaultFontSize;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)circumscribedBounds;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;

@end

