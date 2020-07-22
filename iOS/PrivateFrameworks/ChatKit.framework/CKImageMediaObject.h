//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKImageData, NSString, NSURL, UIImage;

@interface CKImageMediaObject
{
    CKImageData *_imageData;
    CKImageData *_backgroundImageData;
    NSURL *_appendedBundleURL;
    struct CGSize _originalSize;
    NSString *_irisVideoPath;
    _Bool _isSticker;
    UIImage *_thumbnail;
}

+ (Class)imageDataClass;
+ (_Bool)isPreviewable;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
@property(readonly, nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (struct CGSize)originalSize;
@property(readonly, nonatomic) CKImageData *imageData;
- (id)previewItemTitle;
- (id)previewItemURL;
- (_Bool)canShareItem;
- (id)pasteboardItem;
- (id)_getIrisBundleURL;
- (id)_getTempIrisBundleLocation;
- (id)_getTempIrisFolder;
- (id)calculateIrisVideoPath;
- (id)getIrisVideoPath;
- (void)export:(id)arg1;
@property(readonly, nonatomic) _Bool isIrisAsset;
- (_Bool)canExport;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (struct CGSize)bbSize;
- (id)location;
- (int)mediaType;
- (id)initWithTransfer:(id)arg1;
- (void)dealloc;
- (void)_removeAppendedBundle;

@end
