//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSString, VKCImageAnalysis;

__attribute__((visibility("hidden")))
@interface VKAnalyticsSessionAccumulator : NSObject
{
    _Bool _didSelectText;
    _Bool _didActivateHighlightAll;
    _Bool _didActivateRegex;
    _Bool _isPerformingAutomatedTest;
    VKCImageAnalysis *_analysis;
    NSMutableArray *_interactionEvents;
    NSMutableArray *_textEvents;
    NSMutableArray *_quickActionEvents;
    NSMutableArray *_mrcEvents;
    NSMutableArray *_ddEvents;
    NSMutableArray *_vsEvents;
    NSMutableArray *_subjectEvents;
    NSDate *_sessionOpenDate;
    unsigned long long _numberOfEvents;
    unsigned long long _numberOfTextEvents;
    unsigned long long _numberOfMRCEvents;
    unsigned long long _numberOfDDEvents;
    unsigned long long _numberOfVSEvents;
    unsigned long long _numberOfQuickActionEvents;
    unsigned long long _numberOfSubjectEvents;
    unsigned long long _numberOfMRCElements;
    unsigned long long _numberOfDDElements;
    unsigned long long _numberOfVSElements;
    unsigned long long _textLength;
    unsigned long long _averageTextSelectionLength;
    unsigned long long _numberOfSelectionChanges;
    double _sessionDuration;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool isPerformingAutomatedTest; // @synthesize isPerformingAutomatedTest=_isPerformingAutomatedTest;
@property(nonatomic) double sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property(nonatomic) _Bool didActivateRegex; // @synthesize didActivateRegex=_didActivateRegex;
@property(nonatomic) _Bool didActivateHighlightAll; // @synthesize didActivateHighlightAll=_didActivateHighlightAll;
@property(nonatomic) unsigned long long numberOfSelectionChanges; // @synthesize numberOfSelectionChanges=_numberOfSelectionChanges;
@property(nonatomic) unsigned long long averageTextSelectionLength; // @synthesize averageTextSelectionLength=_averageTextSelectionLength;
@property(nonatomic) unsigned long long textLength; // @synthesize textLength=_textLength;
@property(nonatomic) unsigned long long numberOfVSElements; // @synthesize numberOfVSElements=_numberOfVSElements;
@property(nonatomic) unsigned long long numberOfDDElements; // @synthesize numberOfDDElements=_numberOfDDElements;
@property(nonatomic) unsigned long long numberOfMRCElements; // @synthesize numberOfMRCElements=_numberOfMRCElements;
@property(nonatomic) unsigned long long numberOfSubjectEvents; // @synthesize numberOfSubjectEvents=_numberOfSubjectEvents;
@property(nonatomic) unsigned long long numberOfQuickActionEvents; // @synthesize numberOfQuickActionEvents=_numberOfQuickActionEvents;
@property(nonatomic) unsigned long long numberOfVSEvents; // @synthesize numberOfVSEvents=_numberOfVSEvents;
@property(nonatomic) unsigned long long numberOfDDEvents; // @synthesize numberOfDDEvents=_numberOfDDEvents;
@property(nonatomic) unsigned long long numberOfMRCEvents; // @synthesize numberOfMRCEvents=_numberOfMRCEvents;
@property(nonatomic) unsigned long long numberOfTextEvents; // @synthesize numberOfTextEvents=_numberOfTextEvents;
@property(nonatomic) unsigned long long numberOfEvents; // @synthesize numberOfEvents=_numberOfEvents;
@property(nonatomic) _Bool didSelectText; // @synthesize didSelectText=_didSelectText;
@property(retain, nonatomic) NSDate *sessionOpenDate; // @synthesize sessionOpenDate=_sessionOpenDate;
@property(retain, nonatomic) NSMutableArray *subjectEvents; // @synthesize subjectEvents=_subjectEvents;
@property(retain, nonatomic) NSMutableArray *vsEvents; // @synthesize vsEvents=_vsEvents;
@property(retain, nonatomic) NSMutableArray *ddEvents; // @synthesize ddEvents=_ddEvents;
@property(retain, nonatomic) NSMutableArray *mrcEvents; // @synthesize mrcEvents=_mrcEvents;
@property(retain, nonatomic) NSMutableArray *quickActionEvents; // @synthesize quickActionEvents=_quickActionEvents;
@property(retain, nonatomic) NSMutableArray *textEvents; // @synthesize textEvents=_textEvents;
@property(retain, nonatomic) NSMutableArray *interactionEvents; // @synthesize interactionEvents=_interactionEvents;
@property(retain, nonatomic) VKCImageAnalysis *analysis; // @synthesize analysis=_analysis;
- (id)description;
- (void)send;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsDictionary;
- (void)calculateDidActivateRegex;
- (void)calculateDidHighlightAll;
- (void)calculateAverageSelectedLengthFromTextEvents;
- (void)close;
- (void)addEvent:(id)arg1;
- (id)initWithAnalysis:(id)arg1 customIdentifier:(id)arg2;

@end

