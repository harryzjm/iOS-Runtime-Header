//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, MKMapView;

@interface UIView (MapKitExtras)
@property(readonly, nonatomic) struct CGRect _mapkit_doubleFrame;
- (unsigned long long)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;
@property(readonly, retain, nonatomic) MKMapView *_mapKit_mapView;
@property(readonly, retain, nonatomic) CALayer *_mapkit_currentLayer;
@end
