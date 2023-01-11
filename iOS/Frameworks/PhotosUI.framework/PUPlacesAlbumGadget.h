//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PXPlacesSnapshotFactoryDelegate-Protocol.h>

@class NSString, PUAlbumListCellContentView, PXPlacesAlbumCoverProvider, UIImage;

__attribute__((visibility("hidden")))
@interface PUPlacesAlbumGadget <PXPlacesSnapshotFactoryDelegate>
{
    PUAlbumListCellContentView *_albumListCellContentView;
    NSString *_title;
    PXPlacesAlbumCoverProvider *_placesAlbumCoverProvider;
    UIImage *_currentSnapshotImage;
}

@property(retain, nonatomic) UIImage *currentSnapshotImage; // @synthesize currentSnapshotImage=_currentSnapshotImage;
@property(readonly, nonatomic) PXPlacesAlbumCoverProvider *placesAlbumCoverProvider; // @synthesize placesAlbumCoverProvider=_placesAlbumCoverProvider;
- (id)title;
- (void).cxx_destruct;
- (void)_updateSubtitleInContentView:(id)arg1 animated:(_Bool)arg2;
- (void)_updateImageInContentView:(id)arg1 animated:(_Bool)arg2;
- (void)placesSnapshotCountDidChange;
- (void)placesSnapshotDidChange;
- (id)albumListCellContentView;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

