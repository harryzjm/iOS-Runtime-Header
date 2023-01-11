//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKStackedCategoryValueSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    long long _pointStyle;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    struct CGPoint _start;
    struct CGPoint _end;
}

@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) long long pointStyle; // @synthesize pointStyle=_pointStyle;
@property(readonly, nonatomic) struct CGPoint end; // @synthesize end=_end;
@property(readonly, nonatomic) struct CGPoint start; // @synthesize start=_start;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 pointStyle:(long long)arg3 userInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

