//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGAbsoluteCompositeLayout.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUIApps34PUXStoryColorGradeEditorItemLayout : PXGAbsoluteCompositeLayout
{
    MISSING_TYPE *colorGradeKind;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *clipLayout;
    MISSING_TYPE *clipLayoutIndex;
    MISSING_TYPE *overlayLayout;
    MISSING_TYPE *overlayLayoutIndex;
    MISSING_TYPE *previewMode;
    MISSING_TYPE *updateFlags;
    MISSING_TYPE *clip;
    MISSING_TYPE *clipTimeRange;
    MISSING_TYPE *captionHeight;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id *)arg3;
- (void)referenceSizeDidChange;
- (void)update;

@end
