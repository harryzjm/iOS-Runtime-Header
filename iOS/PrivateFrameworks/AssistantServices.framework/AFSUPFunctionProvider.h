//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSpeakableNamespaceProvider-Protocol.h>

@class NSDateFormatter, NSString;

@interface AFSUPFunctionProvider <AFSpeakableNamespaceProvider>
{
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
}

+ (_Bool)_shouldAutomaticallyProvideFunctions;
- (void).cxx_destruct;
- (id)stringForExpression:(id)arg1;
- (id)_callFunction:(id)arg1 withArguments:(id)arg2;
- (id)_speechRecognitionUsageDescription:(id)arg1;
- (id)_siriUsageDescription:(id)arg1;
- (id)_deviceModel;
- (id)_lowercaseString:(id)arg1;
- (id)_tempInWeatherUnits:(id)arg1;
- (id)_currentWeekday:(id)arg1;
- (id)_currentShortDate:(id)arg1;
- (id)_currentLongDate:(id)arg1;
- (id)_currentTime:(id)arg1;
- (id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2;
- (id)initWithLocale:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
