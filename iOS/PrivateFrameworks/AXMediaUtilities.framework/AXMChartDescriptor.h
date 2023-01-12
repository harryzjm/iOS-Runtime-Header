//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMChartDictionaryRepresentable-Protocol.h>
#import <AXMediaUtilities/NSCopying-Protocol.h>

@class AXMCategoricalDataAxisDescriptor, AXMNumericDataAxisDescriptor, NSArray, NSAttributedString, NSString;
@protocol AXMDataAxisDescriptor;

@interface AXMChartDescriptor : NSObject <AXMChartDictionaryRepresentable, NSCopying>
{
    AXMNumericDataAxisDescriptor *_timeNumericAxisDescriptor;
    AXMCategoricalDataAxisDescriptor *_timeCategoricalAxisDescriptor;
    AXMNumericDataAxisDescriptor *_pitchAxisDescriptor;
    AXMNumericDataAxisDescriptor *_durationAxisDescriptor;
    AXMNumericDataAxisDescriptor *_volumeAxisDescriptor;
    AXMCategoricalDataAxisDescriptor *_timbreAxisDescriptor;
    NSAttributedString *_attributedTitle;
    NSString *_summary;
    long long _contentDirection;
    NSArray *_series;
    id <AXMDataAxisDescriptor> _xAxis;
    AXMNumericDataAxisDescriptor *_yAxis;
    NSArray *_additionalAxes;
    NSArray *_annotations;
    struct CGRect _contentFrame;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
@property(copy, nonatomic) NSArray *additionalAxes; // @synthesize additionalAxes=_additionalAxes;
@property(retain, nonatomic) AXMNumericDataAxisDescriptor *yAxis; // @synthesize yAxis=_yAxis;
@property(retain, nonatomic) id <AXMDataAxisDescriptor> xAxis; // @synthesize xAxis=_xAxis;
@property(copy, nonatomic) NSArray *series; // @synthesize series=_series;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) long long contentDirection; // @synthesize contentDirection=_contentDirection;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (id)zCategoricalAxisDescriptor;
- (id)zNumericAxisDescriptor;
@property(readonly, nonatomic) AXMCategoricalDataAxisDescriptor *timbreAxisDescriptor; // @synthesize timbreAxisDescriptor=_timbreAxisDescriptor;
@property(readonly, nonatomic) AXMNumericDataAxisDescriptor *volumeAxisDescriptor; // @synthesize volumeAxisDescriptor=_volumeAxisDescriptor;
@property(readonly, nonatomic) AXMNumericDataAxisDescriptor *durationAxisDescriptor; // @synthesize durationAxisDescriptor=_durationAxisDescriptor;
@property(readonly, nonatomic) AXMNumericDataAxisDescriptor *pitchAxisDescriptor; // @synthesize pitchAxisDescriptor=_pitchAxisDescriptor;
@property(readonly, nonatomic) AXMCategoricalDataAxisDescriptor *timeCategoricalAxisDescriptor; // @synthesize timeCategoricalAxisDescriptor=_timeCategoricalAxisDescriptor;
@property(readonly, nonatomic) AXMNumericDataAxisDescriptor *timeNumericAxisDescriptor; // @synthesize timeNumericAxisDescriptor=_timeNumericAxisDescriptor;
@property(readonly, nonatomic) id <AXMDataAxisDescriptor> timeAxisDescriptor;
- (void)generateDataSummariesWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;
@property(copy, nonatomic) NSString *title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_commonInitWithSummary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 additionalAxes:(id)arg4 series:(id)arg5;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAttributedTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 additionalAxes:(id)arg5 series:(id)arg6;
- (id)initWithTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 additionalAxes:(id)arg5 series:(id)arg6;
- (id)initWithAttributedTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 series:(id)arg5;
- (id)initWithTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 series:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
