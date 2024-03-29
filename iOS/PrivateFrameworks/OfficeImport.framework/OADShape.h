//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADOrientedBounds, OADShapeGeometry, OADTextBody;

__attribute__((visibility("hidden")))
@interface OADShape
{
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
    OADOrientedBounds *mTextOrientedBounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OADOrientedBounds *textOrientedBounds; // @synthesize textOrientedBounds=mTextOrientedBounds;
- (id)description;
- (_Bool)isTextBox;
- (void)createPresetGeometryWithShapeType:(int)arg1;
- (void)removeUnnecessaryOverrides;
- (void)flattenProperties;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setTextBody:(id)arg1;
- (id)textBody;
- (id)shapeStyle;
- (id)shapeProperties;
- (int)type;
- (id)geometry;
- (void)setGeometry:(id)arg1;
- (id)init;

@end

