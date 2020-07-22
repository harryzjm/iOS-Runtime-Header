//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICColorSpace, IBICGraphicsFeatureSet, IBICIdiom, IBICMemoryClass, IBICScale;

@interface IBICAbstractTextureSetRepSlot
{
    IBICIdiom *_idiom;
    IBICScale *_scale;
    IBICMemoryClass *_memory;
    IBICGraphicsFeatureSet *_graphicsFeatureSet;
    IBICColorSpace *_colorSpace;
}

+ (Class)assetRepClass;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly) IBICColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) IBICGraphicsFeatureSet *graphicsFeatureSet; // @synthesize graphicsFeatureSet=_graphicsFeatureSet;
@property(readonly) IBICMemoryClass *memory; // @synthesize memory=_memory;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (void)captureComponents;
- (id)suggestedSourceItemNameForRep;

@end

