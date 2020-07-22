//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPass, UIImage;

@interface CKPassbookMediaObject
{
    PKPass *_pass;
    UIImage *_icon;
}

+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (_Bool)isPreviewable;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (int)mediaType;
- (id)passView;
- (_Bool)shouldShowDisclosure;
- (_Bool)shouldBeQuickLooked;
- (_Bool)shouldShowViewer;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)subtitle;
- (id)title;
- (id)initWithTransfer:(id)arg1;

@end
