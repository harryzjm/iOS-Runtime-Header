//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@class NSString;

@interface UIImage (MapKitExtras)
+ (id)_mapkit_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)_mapkit_imageNamed:(id)arg1;
+ (id)_mapkit_systemImageNamed:(id)arg1;
+ (id)_mapkit_liveTransitIndicatorImageUsingDarkMode:(_Bool)arg1;
+ (id)_mapkit_liveTransitIndicatorImageApplyingColorForStatus:(long long)arg1 darkMode:(_Bool)arg2;
+ (id)_mapkit_imageFromVKImage:(id)arg1;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 nightMode:(_Bool)arg4;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3;
- (id)_mapkit_imageWithAlpha:(double)arg1;
- (id)_mapkit_templateImageWithTintColor:(id)arg1;
- (id)_mapkit_horizontallyFlippedImage;
- (id)_mapkit_dimmedImage;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;
- (id)_mapkit_imageWithSymbolConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

