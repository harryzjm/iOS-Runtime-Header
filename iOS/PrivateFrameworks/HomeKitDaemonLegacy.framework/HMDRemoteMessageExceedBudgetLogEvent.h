//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageExceedBudgetLogEvent : HMMLogEvent
{
    struct _HMFRate _budgetRate;
}

+ (id)eventWithBudgetRate:(struct _HMFRate)arg1;
@property(readonly, nonatomic) struct _HMFRate budgetRate; // @synthesize budgetRate=_budgetRate;
- (id)initWithBudgetRate:(struct _HMFRate)arg1;
- (void)updateDiagnosticReportSignature:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *diagnosticReportEventSubType;
@property(readonly, copy) NSString *diagnosticReportEventType;

@end

