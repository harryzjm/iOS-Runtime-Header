//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera <NSSecureCoding>
{
    GEOTrafficCamera *_trafficCamera;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned int cameraPriority;
@property(readonly, nonatomic) _Bool hasCameraPriority;
@property(readonly, nonatomic) double speedThreshold;
@property(readonly, nonatomic) _Bool hasSpeedThreshold;
@property(readonly, nonatomic) NSString *speedLimitText;
@property(readonly, nonatomic) _Bool hasSpeedLimitText;
@property(readonly, nonatomic) unsigned int highlightDistance;
@property(readonly, nonatomic) int type;
- (id)detailFormatForLocation:(id)arg1;
- (id)titleFormatForLocation:(id)arg1;
- (id)position;
- (id)description;
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 trafficCamera:(id)arg4 onRoute:(id)arg5;

@end
