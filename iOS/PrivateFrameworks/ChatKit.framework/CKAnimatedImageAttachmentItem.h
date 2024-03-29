//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface CKAnimatedImageAttachmentItem
{
    NSURL *_animatedPreviewURL;
    struct CGSize _imageSize;
}

+ (_Bool)shouldScaleUpPreview;
+ (id)UTITypes;
- (void).cxx_destruct;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSURL *animatedPreviewURL; // @synthesize animatedPreviewURL=_animatedPreviewURL;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2;
- (id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 withImageData:(id)arg3;
- (id)_newImageData;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (id)_savedPreviewFromURL:(id)arg1;
- (id)animatedPreviewURL:(_Bool)arg1;
- (struct CGSize)size;

@end

