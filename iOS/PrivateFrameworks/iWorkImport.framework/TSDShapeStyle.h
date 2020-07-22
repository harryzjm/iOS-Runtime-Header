//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDShapeStyle <TSSPreset, TSDMixing>
{
}

+ (_Bool)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (id)propertiesAllowingNSNull;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)properties;
+ (void)initialize;
+ (void)saveShapeStylePropertyMap:(id)arg1 toArchive:(struct ShapeStylePropertiesArchive *)arg2 archiver:(id)arg3;
+ (void)loadShapeStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ShapeStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (_Bool)hasLineEnds;
- (_Bool)wantsHighContrastStrokeColorWithColor:(id)arg1;
- (_Bool)wantsHighContrastFillColorWithColor:(id)arg1;
- (_Bool)wantsHighContrastBackgroundColorWithColor:(id)arg1;
- (_Bool)wantsHighContrastBackgroundColor;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (void)saveToArchive:(struct ShapeStyleArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeStyleArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize)arg1;

@end

