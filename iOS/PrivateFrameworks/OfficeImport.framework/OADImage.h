//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADMovie, OADOle, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADImage
{
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}

- (void).cxx_destruct;
- (id)description;
- (void)createPictureFramePresetGeometry;
- (id)createImageFill;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setMovie:(id)arg1;
- (id)movie;
- (void)setOle:(id)arg1;
- (id)ole;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (id)imageProperties;
- (id)initWithBlipRef:(id)arg1;
- (id)init;

@end

