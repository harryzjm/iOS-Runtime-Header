//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlacesKit/PXPlacesMapPipelineComponent-Protocol.h>

@class NSOrderedSet, PXPlacesMapView;
@protocol PXPlacesMapRenderable;

@protocol PXPlacesMapSelectionHandler <PXPlacesMapPipelineComponent>
- (NSOrderedSet *)selectedGeotaggablesForRenderable:(id <PXPlacesMapRenderable>)arg1 mapView:(PXPlacesMapView *)arg2;
@end

