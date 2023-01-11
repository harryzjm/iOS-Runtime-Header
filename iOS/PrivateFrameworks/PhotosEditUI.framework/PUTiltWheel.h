//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDictionary;
@protocol PUTiltWheelDataSource;

__attribute__((visibility("hidden")))
@interface PUTiltWheel : UIView
{
    int __tiltWheelOrientation;
    id <PUTiltWheelDataSource> _dataSource;
    NSDictionary *__dotsByDegree;
    NSDictionary *__labelsByDegree;
    unsigned long long __numericIndicatorDegreeStep;
}

@property(nonatomic, setter=_setTiltWheelOrientation:) int _tiltWheelOrientation; // @synthesize _tiltWheelOrientation=__tiltWheelOrientation;
@property(nonatomic, setter=_setNumericIndicatorDegreeStep:) unsigned long long _numericIndicatorDegreeStep; // @synthesize _numericIndicatorDegreeStep=__numericIndicatorDegreeStep;
@property(copy, nonatomic, setter=_setLabelsByDegree:) NSDictionary *_labelsByDegree; // @synthesize _labelsByDegree=__labelsByDegree;
@property(copy, nonatomic, setter=_setDotsByDegree:) NSDictionary *_dotsByDegree; // @synthesize _dotsByDegree=__dotsByDegree;
@property(nonatomic) __weak id <PUTiltWheelDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)_dotIndicatorSizeForDegree:(long long)arg1;
- (id)_makeLabelForDegree:(long long)arg1;
- (id)_makeDotForDegree:(long long)arg1;
- (unsigned long long)_countOfIndicatorsFrom:(double)arg1 to:(double)arg2 step:(unsigned long long)arg3;
- (double)_dotLayoutRadius;
- (struct CGPoint)_baseViewCenterForRadius:(double)arg1 aroundCenter:(struct CGPoint)arg2;
- (void)_layoutViewsByDegree:(id)arg1 aroundRadius:(double)arg2;
- (void)_layoutLabels;
- (void)_layoutDots;
- (void)_purgeCachedIndicators;
- (void)reloadData;
- (void)layoutSubviews;

@end

