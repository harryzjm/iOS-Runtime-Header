//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKAttachmentItem.h"

__attribute__((visibility("hidden")))
@interface CKImageAttachmentItem : CKAttachmentItem
{
    _Bool _backgroundEnqueued;
    _Bool _useDefaultSize;
    struct CGSize _imageSize;
}

+ (id)UTITypes;
@property(nonatomic) _Bool useDefaultSize; // @synthesize useDefaultSize=_useDefaultSize;
@property(nonatomic) _Bool backgroundEnqueued; // @synthesize backgroundEnqueued=_backgroundEnqueued;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)_calculateImageSize;
- (void)startDeferredSetup;
- (struct CGSize)size;
- (id)imageData;
- (id)_newImageData;

@end

