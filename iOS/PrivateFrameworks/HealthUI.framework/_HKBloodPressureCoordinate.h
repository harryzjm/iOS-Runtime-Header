//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class HKMinMaxCoordinate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKBloodPressureCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    HKMinMaxCoordinate *_systolicCoordinate;
    HKMinMaxCoordinate *_diastolicCoordinate;
}

@property(readonly, nonatomic) HKMinMaxCoordinate *diastolicCoordinate; // @synthesize diastolicCoordinate=_diastolicCoordinate;
@property(readonly, nonatomic) HKMinMaxCoordinate *systolicCoordinate; // @synthesize systolicCoordinate=_systolicCoordinate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithSystolicCoordinate:(id)arg1 diastolicCoordinate:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

