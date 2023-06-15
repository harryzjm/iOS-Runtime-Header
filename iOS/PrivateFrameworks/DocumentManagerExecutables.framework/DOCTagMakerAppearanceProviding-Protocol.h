//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentManagerExecutables/DOCUIAppearanceValues-Protocol.h>

@class UIColor;
@protocol DOCTagContainerAppearanceProviding;

@protocol DOCTagMakerAppearanceProviding <DOCUIAppearanceValues>
@property(readonly) struct NSDirectionalEdgeInsets rowOfTagsContentInsets;
@property(readonly) UIColor *rowOfTagsDotSelectionBorderColor;
@property(readonly) double rowOfTagsDotSelectionBorderWidth;
@property(readonly) double rowOfTagsDotSize;
@property(readonly) _Bool inputFieldUsesStandardBackground;
@property(readonly) _Bool inputFieldShowsLeadingDot;
@property(readonly) id <DOCTagContainerAppearanceProviding> container;
@end

