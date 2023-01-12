//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class GEOAttribution, GEOMapServiceTraits, MKMapItem, MKTableViewCell, MKTransitDeparturesViewController, NSArray;
@protocol GEOTransitConnectionInfo, GEOTransitDepartureSequence, MKTransitLineMarker;

@protocol MKTransitDepaturesViewControllerDelegate <NSObject>
- (GEOMapServiceTraits *)transitDeparturesViewControllerTraits:(MKTransitDeparturesViewController *)arg1;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectAttribution:(GEOAttribution *)arg2;
- (_Bool)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 canSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 transitMapItem:(MKMapItem *)arg3 transitLine:(id <MKTransitLineMarker>)arg4 fromCell:(MKTableViewCell *)arg5;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 transitMapItem:(MKMapItem *)arg3 transitLine:(id <MKTransitLineMarker>)arg4 fromCell:(MKTableViewCell *)arg5;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2 fromCell:(MKTableViewCell *)arg3;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 showIncidents:(NSArray *)arg2;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
@end

