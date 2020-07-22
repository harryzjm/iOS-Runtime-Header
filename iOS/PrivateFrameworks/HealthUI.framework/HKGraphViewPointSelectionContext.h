//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKGraphSeries, HKValueRange, NSArray, NSDateComponents;

@interface HKGraphViewPointSelectionContext : NSObject
{
    HKGraphSeries *_selectedSeries;
    HKValueRange *_selectedRangeXValues;
    HKValueRange *_selectedPathIndexRange;
    HKValueRange *_selectedPointValueRange;
    NSDateComponents *_pointIntervalComponents;
    NSArray *_userInfo;
}

@property(retain, nonatomic) NSArray *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDateComponents *pointIntervalComponents; // @synthesize pointIntervalComponents=_pointIntervalComponents;
@property(retain, nonatomic) HKValueRange *selectedPointValueRange; // @synthesize selectedPointValueRange=_selectedPointValueRange;
@property(retain, nonatomic) HKValueRange *selectedPathIndexRange; // @synthesize selectedPathIndexRange=_selectedPathIndexRange;
@property(retain, nonatomic) HKValueRange *selectedRangeXValues; // @synthesize selectedRangeXValues=_selectedRangeXValues;
@property(retain, nonatomic) HKGraphSeries *selectedSeries; // @synthesize selectedSeries=_selectedSeries;
- (void).cxx_destruct;
- (id)debugDescription;

@end

