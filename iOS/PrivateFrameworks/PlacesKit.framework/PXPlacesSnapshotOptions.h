//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKExtendedTraitCollection;
@protocol OS_dispatch_queue, PXPlacesMapGeotaggableInfoDelegate;

@interface PXPlacesSnapshotOptions : NSObject
{
    _Bool _shouldSkipPlaceholder;
    _Bool _showsPointLabels;
    PKExtendedTraitCollection *_extendedTraitCollection;
    id <PXPlacesMapGeotaggableInfoDelegate> _geotaggableInformationDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_cacheDirectoryPath;
    double _visibleDistance;
    unsigned long long _snapshotMapType;
    struct CGSize _viewSize;
}

@property(nonatomic) _Bool showsPointLabels; // @synthesize showsPointLabels=_showsPointLabels;
@property(nonatomic) _Bool shouldSkipPlaceholder; // @synthesize shouldSkipPlaceholder=_shouldSkipPlaceholder;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) unsigned long long snapshotMapType; // @synthesize snapshotMapType=_snapshotMapType;
@property(nonatomic) double visibleDistance; // @synthesize visibleDistance=_visibleDistance;
@property(retain, nonatomic) NSString *cacheDirectoryPath; // @synthesize cacheDirectoryPath=_cacheDirectoryPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <PXPlacesMapGeotaggableInfoDelegate> geotaggableInformationDelegate; // @synthesize geotaggableInformationDelegate=_geotaggableInformationDelegate;
@property(retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
- (void).cxx_destruct;
- (id)init;

@end

