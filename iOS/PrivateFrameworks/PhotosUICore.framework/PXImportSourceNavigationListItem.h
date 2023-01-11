//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHImportSource, PHPhotoLibrary, UIImage;

@interface PXImportSourceNavigationListItem
{
    PHImportSource *_importSource;
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PHImportSource *importSource; // @synthesize importSource=_importSource;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)representedObject;
- (_Bool)isRemovable;
- (id)glyphImageName;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3;
- (id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2;

@end
