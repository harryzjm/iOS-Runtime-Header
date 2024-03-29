//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSApplication/TSABaseApplicationDelegate.h>

@interface TPAppDelegate : TSABaseApplicationDelegate
{
    _Bool _cachedBidiIsSupported;
}

+ (double)defaultFontForNewBasicDocumentsPointSize;
+ (id)defaultFontForNewBasicDocumentsFontName;
+ (id)sharedDelegate;
+ (id)tp_sharedPropertiesProvider;
- (void)p_inputMethodsChanged:(id)arg1;
- (void)p_localeChanged:(id)arg1;
- (void)registerSOSClassTypeMappings;
- (_Bool)supportsRTL;
- (_Bool)imageGalleryCaptionsUsePlaceholderText;
- (_Bool)supportsLinkedTextBoxes;
- (_Bool)supportsAutosizingTextboxes;
- (_Bool)supportsQuickFormatBar;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;
- (id)equationEditorAPDID;
- (id)createCompatibilityDelegate;
- (void)customizeHyperlinkViewController:(id)arg1 documentRoot:(id)arg2;
- (_Bool)isValidURLForImportedHyperlink:(id)arg1 targetDocumentRoot:(id)arg2 forCrossDocumentPaste:(_Bool)arg3;
- (void)dealloc;
- (Class)propertiesProviderClass;
- (id)init;
- (_Bool)textInspectorShowsMoreSubpane;
- (_Bool)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;

@end

