//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKLabelMarker.h>

#import <MapKit/MKCalloutSource-Protocol.h>

@class NSString, UIView;

@interface VKLabelMarker (MapKitAdditions) <MKCalloutSource>
@property(retain, nonatomic) UIView *detailCalloutAccessoryView;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

