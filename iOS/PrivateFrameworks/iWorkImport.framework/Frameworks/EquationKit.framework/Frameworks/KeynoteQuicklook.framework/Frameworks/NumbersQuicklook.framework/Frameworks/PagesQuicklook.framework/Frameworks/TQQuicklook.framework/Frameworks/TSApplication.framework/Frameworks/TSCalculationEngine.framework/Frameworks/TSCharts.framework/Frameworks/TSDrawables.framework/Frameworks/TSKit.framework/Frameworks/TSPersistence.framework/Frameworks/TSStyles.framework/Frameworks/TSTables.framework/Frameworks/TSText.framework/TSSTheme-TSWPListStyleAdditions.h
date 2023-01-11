//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSStyles/TSSTheme.h>

@class NSArray, NSSet, NSString, TSDMediaStyle, TSWPCharacterStyle, TSWPColumnStyle, TSWPDropCapStyle, TSWPListStyle, TSWPParagraphStyle, TSWPTOCEntryStyle;

@interface TSSTheme (TSWPListStyleAdditions)
- (void)tswpSaveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)tswpLoadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;
- (void)removeTextStylesOfPresetKinds:(id)arg1 notReferencedInDocumentRoot:(id)arg2;
@property(readonly, nonatomic) NSSet *unmodifiableStyles;
@property(readonly, nonatomic) NSSet *undeletableStyles;
- (void)createDefaultDropCapPresetsIfNeeded;
- (void)createCommentInfoStyleIfNeeded;
- (void)createDefaultParagraphStyleIfNeeded;
- (void)modifyHyperlinkStyleToMatchSage;
@property(readonly, nonatomic) NSString *localizedBodyStyleName;
@property(readonly, nonatomic) TSWPDropCapStyle *defaultDropCapStyle;
@property(readonly, nonatomic) TSDMediaStyle *defaultEquationStyle;
@property(readonly, nonatomic) TSWPTOCEntryStyle *defaultTOCEntryStyle;
@property(readonly, nonatomic) TSWPColumnStyle *defaultColumnStyle;
@property(readonly, nonatomic) TSWPListStyle *defaultListStyle;
@property(readonly, nonatomic) TSWPParagraphStyle *defaultParagraphStyle;
@property(readonly, nonatomic) TSWPCharacterStyle *hyperlinkStyle;
@property(readonly, nonatomic) TSWPCharacterStyle *defaultCharacterStyle;
@property(readonly, nonatomic) NSArray *paragraphPresetStyles;
- (id)paragraphStylesWithPartialContentTag:(id)arg1;
- (id)paragraphStylesWithContentTag:(id)arg1;
- (id)paragraphStyleWithContentTag:(id)arg1;
@end
