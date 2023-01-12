//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MKMapItem, MUPlaceInfoSectionController, MUPresentationOptions, _MKMapItemAttribution;

@protocol MUPlaceInfoSectionControllerDelegate <NSObject>
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 didSelectEditPlaceDetailsOfType:(long long)arg2;
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 didSelectAddMissingDataOfType:(long long)arg2;
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 didTapAttribution:(_MKMapItemAttribution *)arg2;
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 selectedViewPlaceWithMapItem:(MKMapItem *)arg2 options:(MUPresentationOptions *)arg3;
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 selectedDirectionsWithMapItem:(MKMapItem *)arg2 options:(MUPresentationOptions *)arg3;
@end

