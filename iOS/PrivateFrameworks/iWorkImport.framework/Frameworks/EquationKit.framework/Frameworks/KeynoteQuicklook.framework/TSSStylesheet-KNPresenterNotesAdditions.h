//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSStyles/TSSStylesheet.h>

@class TSWPParagraphStyle;

@interface TSSStylesheet (KNPresenterNotesAdditions)
+ (id)p_presenterNotesListStyleIdentifierForListLabelType:(unsigned long long)arg1;
+ (id)presenterNotesParagraphStyleIdentifier;
- (id)stickyCommentStyles;
- (id)allPresenterNotesStyles;
- (id)p_newDefaultPresenterNotesListStyleWithContext:(id)arg1 forListLabelType:(unsigned long long)arg2;
- (id)p_defaultPresenterNotesListStylePropertyMapForListLabelType:(unsigned long long)arg1;
- (id)p_defaultPresenterNotesParagraphStyleWithContext:(id)arg1;
- (id)p_defaultPresenterNotesParagraphStylePropertyMap;
- (void)p_upgradeDefaultPresenterNotesStylesResetExisting:(_Bool)arg1;
- (id)p_boxedLabelTypesForNotesListStyles;
- (void)upgradeDefaultPresenterNotesStyles;
- (void)addDefaultPresenterNotesStylesIfAbsent;
@property(readonly, nonatomic) TSWPParagraphStyle *defaultPresenterNotesParagraphStyle;
@end

