//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec
{
}

+ (id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;
+ (id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;
@property(readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectOutputOpacity;
@property(readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectShapeOpacity;
- (id)componentOfType:(unsigned int)arg1;
- (_Bool)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)replaceComponentsWithComponentsFromEffectRendition:(id)arg1 withDocument:(id)arg2;
- (id)effectPreset;
- (void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *components; // @dynamic components;
@property(retain, nonatomic) NSNumber *effectScale; // @dynamic effectScale;

@end

