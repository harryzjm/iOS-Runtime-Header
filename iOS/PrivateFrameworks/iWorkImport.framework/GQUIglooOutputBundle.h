//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQUIglooOutputBundle : NSObject
{
    struct __CFDictionary *mAttachments;
    struct __CFData *mMainHtmlData;
    struct __CFString *mUriPrefix;
    struct __CFString *mUuidStr;
}

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;
- (void)setDocumentSize:(struct CGSize)arg1;
- (struct __CFDictionary *)createOutputDictionary;
- (struct __CFDictionary *)attachments;
- (struct __CFData *)mainHtmlData;
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;
- (void)setUriPrefix:(struct __CFString *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

