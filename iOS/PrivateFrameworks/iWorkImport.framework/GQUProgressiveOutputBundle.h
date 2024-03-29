//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQUProgressiveHelper, NSString;

@interface GQUProgressiveOutputBundle : NSObject
{
    GQUProgressiveHelper *mHelper;
    struct __CFDictionary *mQuickLookProperties;
    struct __CFDictionary *mAttachmentsURLs;
    struct __CFDictionary *mComputedAttachments;
    struct __CFString *mUuidStr;
    struct __CFString *mUriScheme;
    _Bool mPreviewStarted;
}

- (void)setCurrentSheetUri:(struct __CFString *)arg1;
- (struct __CFURL *)getAttachmentURL:(struct __CFString *)arg1 mimeType:(struct __CFString *)arg2;
- (void)closeAttachment:(struct __CFString *)arg1;
- (void)startProgressiveData;
- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;
- (void)setDocumentSize:(struct CGSize)arg1;
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;
- (_Bool)appendData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 resourceName:(struct __CFString *)arg3;
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;
- (void)dealloc;
- (id)initWithHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

