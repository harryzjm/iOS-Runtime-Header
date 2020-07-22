//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSData, NSString;

@protocol GEONavigationServerPushStateXPCInterface <NSObject>
- (void)setCurrentRoadName:(NSString *)arg1;
- (void)setNavigationVoiceVolumeWithData:(NSData *)arg1;
- (void)setRouteSummaryWithTrafficIncidentAlertDetailsData:(NSData *)arg1;
- (void)setRouteSummaryWithPositionFromDestinationData:(NSData *)arg1;
- (void)setRouteSummaryWithPositionFromManeuverData:(NSData *)arg1;
- (void)setRouteSummaryWithPositionFromSignData:(NSData *)arg1;
- (void)setRouteSummaryWithRideSelectionsData:(NSData *)arg1;
- (void)setRouteSummaryWithStepNameInfoData:(NSData *)arg1;
- (void)setRouteSummaryWithStepIndexData:(NSData *)arg1;
- (void)setRouteSummaryWithActiveRouteDetailsData:(NSData *)arg1;
- (void)setRouteSummaryWithGuidanceStateData:(NSData *)arg1;
- (void)setRouteSummaryWithTransitSummaryData:(NSData *)arg1;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(NSData *)arg1;
@end

