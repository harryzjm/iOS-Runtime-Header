//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface NTKHeartRateTimelineEntryModel
{
    _Bool _hasBPM;
    _Bool _lessThanMinute;
    NSDate *_measurementDate;
    long long _BPM;
}

@property(nonatomic) _Bool lessThanMinute; // @synthesize lessThanMinute=_lessThanMinute;
@property(nonatomic) _Bool hasBPM; // @synthesize hasBPM=_hasBPM;
@property(nonatomic) long long BPM; // @synthesize BPM=_BPM;
@property(retain, nonatomic) NSDate *measurementDate; // @synthesize measurementDate=_measurementDate;
- (void).cxx_destruct;
- (id)_heartrateTintColor;
- (id)_bpmString;
- (id)_heartrateString;
- (id)_newExtraLargeTemplate;
- (id)_newModularLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newCircularTemplateUsingMediumSize:(_Bool)arg1;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)templateForComplicationFamily:(long long)arg1;

@end

