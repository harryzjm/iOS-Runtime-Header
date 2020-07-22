//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSSPreset-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPShapeStyle <TSSPreset>
{
}

+ (void)saveShapeStyleLayoutPropertyMap:(id)arg1 toArchive:(struct ShapeStylePropertiesArchive *)arg2 archiver:(id)arg3;
+ (void)loadShapeStyleLayoutPropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ShapeStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
+ (id)defaultValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)layoutProperties;
+ (id)properties;
+ (id)presetStyleDescriptor;
- (id)archivableRepresentationOfChangeSet:(id)arg1;
- (id)defaultParagraphStyle;
- (void)setDefaultParagraphStyle:(id)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ShapeStyleArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
@property(readonly, nonatomic) NSString *presetKind;

@end
