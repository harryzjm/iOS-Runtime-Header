//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol SGSuggestionsServiceEventsProtocol;

@interface CalSuggestionsProvider : NSObject
{
    _Bool _suggestionsFrameworkAvailable;
    NSObject<SGSuggestionsServiceEventsProtocol> *_service;
}

+ (id)defaultProvider;
@property(retain, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service; // @synthesize service=_service;
@property(nonatomic) _Bool suggestionsFrameworkAvailable; // @synthesize suggestionsFrameworkAvailable=_suggestionsFrameworkAvailable;
- (void).cxx_destruct;
- (_Bool)eventsFoundInMailEnabled;
- (void)rejectSGEventWithRecordID:(id)arg1;
- (void)confirmSGEventWithRecordID:(id)arg1;
- (id)fakeSGRecordID;
- (id)sgRecordIDForEventWithSuggestionID:(id)arg1 error:(id *)arg2;
- (id)senderForEventWithSuggestionID:(id)arg1;
- (void)confirmEventWithSuggestionID:(id)arg1;
- (id)sgEventFromUniqueID:(id)arg1 error:(id *)arg2;
- (void)_loadSuggestionsFramework;
- (id)init;

@end

