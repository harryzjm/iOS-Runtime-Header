//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VKMapView;
@protocol MKOverlay, MKOverlayDrawable;

@protocol MKOverlayContainerViewDelegate
- (VKMapView *)vk_mapLayer;
- (CDStruct_02837cd9)visibleMapRect;
- (id <MKOverlayDrawable>)createDrawableForOverlay:(id <MKOverlay>)arg1;
- (void)overlayContainerAddedDrawables:(NSArray *)arg1;
@end

