//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPImage, LPLinkMetadata;
@protocol PUSharingHeaderDataProvider, PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUSharingHeaderController : NSObject
{
    LPImage *_icloudLinkImage;
    LPImage *_placeholderImage;
    id <PXDisplayAsset> _sharingHeaderFrontAsset;
    id <PXDisplayAsset> _sharingHeaderBackAsset;
    _Bool _showingUnmodifiedOriginalThumbnail;
    id <PUSharingHeaderDataProvider> _dataProvider;
    LPLinkMetadata *_linkMetadata;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) LPLinkMetadata *linkMetadata; // @synthesize linkMetadata=_linkMetadata;
@property(readonly, nonatomic) __weak id <PUSharingHeaderDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (id)_linkPresentationImageForPerson:(id)arg1;
- (id)createTextAttachmentForGlyphImageWithName:(id)arg1;
- (id)_sharingHeaderStatus;
- (void)updateIfNeeded;
- (id)initWithDataProvider:(id)arg1;
- (id)init;

@end

