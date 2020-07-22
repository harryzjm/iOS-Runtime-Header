//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISURLOperationPool, SUImageCache, SUImageDataProvider, UIImage;

@interface SUArtworkCellContext
{
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    SUImageDataProvider *_imageProvider;
    UIImage *_placeholderImage;
}

@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) SUImageDataProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) ISURLOperationPool *imagePool; // @synthesize imagePool=_imagePool;
@property(retain, nonatomic) SUImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void)dealloc;

@end

