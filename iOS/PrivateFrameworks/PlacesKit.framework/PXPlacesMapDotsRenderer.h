//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapOverlayRenderer-Protocol.h>

@class NSString;
@protocol PXPlacesGeotaggedItemDataSource, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapDotsRenderer : NSObject <PXPlacesMapOverlayRenderer>
{
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
    id <PXPlacesGeotaggedItemDataSource> _dataSource;
}

@property __weak id <PXPlacesGeotaggedItemDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
- (void).cxx_destruct;
- (void)reset;
- (id)overlayForLayoutItem:(id)arg1;
- (id)rendererForOverlay:(id)arg1 andMapView:(id)arg2;
@property(readonly) struct UIEdgeInsets minimumEdgeInsets;
- (long long)annotationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

