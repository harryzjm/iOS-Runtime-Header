//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartAnnotationViewDataSource-Protocol.h>

@class HKInteractiveChartDataFormatter, NSMutableArray, NSString;

@interface _HKAudiogramAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>
{
    HKInteractiveChartDataFormatter *_formatter;
    NSMutableArray *_keyValuePairs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property(readonly, nonatomic) HKInteractiveChartDataFormatter *formatter; // @synthesize formatter=_formatter;
- (_Bool)showSeparators;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)dateViewWithOrientation:(long long)arg1;
- (void)updateWithPointSelectionContexts:(id)arg1;
- (id)initWithFormatter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
