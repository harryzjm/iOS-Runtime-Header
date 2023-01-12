//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, XCTAttachmentManager, XCTMeasureOptions, XCTTestIdentifier;

@interface XCTMetricDiagnosticHelper : NSObject
{
    NSArray *_metrics;
    NSArray *_memoryMetrics;
    XCTAttachmentManager *_attachmentManager;
    XCTTestIdentifier *_testIdentifier;
    XCTMeasureOptions *_measureOptions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) XCTMeasureOptions *measureOptions; // @synthesize measureOptions=_measureOptions;
@property(retain) XCTTestIdentifier *testIdentifier; // @synthesize testIdentifier=_testIdentifier;
@property(copy, nonatomic) NSArray *memoryMetrics; // @synthesize memoryMetrics=_memoryMetrics;
@property(copy, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
- (void)addAttachment:(id)arg1;
- (void)attachPerfdataFileCollected:(id)arg1;
- (void)attachTraceFileCollectedForInstrument:(id)arg1;
- (void)sendMetricUseToCoreAnalytics:(id)arg1;
- (void)applyXcodebuildCommandLineOverridesToOptions:(id)arg1;
- (id)initWithMetrics:(id)arg1 attachmentManager:(id)arg2 options:(id)arg3 testIdentifier:(id)arg4;

@end
