//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class PBFPosterGalleryPreviewView;
@protocol PBFPosterPreview;

@protocol PBFPosterGalleryCollectionViewCell <NSObject>
@property(nonatomic) unsigned long long index;
@property(retain, nonatomic) id <PBFPosterPreview> posterPreview;
@property(readonly, nonatomic) PBFPosterGalleryPreviewView *posterPreviewView;
@end

