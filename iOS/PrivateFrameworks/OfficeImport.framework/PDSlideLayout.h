//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout
{
    int mSlideLayoutType;
    PDSlideMaster *mSlideMaster;
}

- (id)description;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)transition;
- (id)background;
- (id)defaultTheme;
- (void)setSlideMaster:(id)arg1;
- (id)slideMaster;
- (void)setSlideLayoutType:(int)arg1;
- (int)slideLayoutType;
- (void)dealloc;
- (id)initWithSlideMaster:(id)arg1;

@end

