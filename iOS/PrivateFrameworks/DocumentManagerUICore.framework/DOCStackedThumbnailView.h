//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <DocumentManagerUICore/DOCAppearanceProtocol-Protocol.h>

@class DOCAppearance, NSArray, NSString;

@interface DOCStackedThumbnailView : UIView <DOCAppearanceProtocol>
{
    NSArray *_items;
    NSArray *_URLs;
    DOCAppearance *_appearance;
    NSArray *_thumbnailImageViews;
    struct CGSize _topThumbnailSize;
}

@property(retain, nonatomic) NSArray *thumbnailImageViews; // @synthesize thumbnailImageViews=_thumbnailImageViews;
@property(retain, nonatomic) DOCAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic) struct CGSize topThumbnailSize; // @synthesize topThumbnailSize=_topThumbnailSize;
@property(retain, nonatomic) NSArray *URLs; // @synthesize URLs=_URLs;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)updateAppearance:(id)arg1;
- (void)createThumbnailViewsWithCount:(unsigned long long)arg1 createViewForIndex:(CDUnknownBlockType)arg2;
- (void)updateURLs;
- (void)updateItems;
- (id)initWithTopThumbnailSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

