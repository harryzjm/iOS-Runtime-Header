//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DDEventComponents : NSObject
{
    NSString *_title;
    NSString *_eventTypeIdentifier;
    NSDate *_startDate;
    NSDate *_endDate;
    double _duration;
    struct _NSRange _originRange;
    long long _source;
    unsigned long long _eventAttributes;
    NSString *_notes;
    NSURL *_URL;
    NSString *_location;
}

+ (id)_messageWithNaturalLanguageContext:(id)arg1 context:(id)arg2;
+ (id)_eventComponents:(id)arg1 withSuggestedTitleFromNaturalLanguageContext:(id)arg2 context:(id)arg3;
+ (id)_eventsFromIntelligentSuggestions:(id)arg1;
+ (id)_eventsFromNaturalLanguageText:(id)arg1 context:(id)arg2;
+ (id)_eventComponents:(id)arg1 matchingResult:(struct __DDResult *)arg2 context:(id)arg3;
+ (id)bestEventComponentsForResult:(struct __DDResult *)arg1 withNaturalLanguageContext:(id)arg2 suggestionsContext:(id)arg3 context:(id)arg4;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(nonatomic) unsigned long long eventAttributes; // @synthesize eventAttributes=_eventAttributes;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) struct _NSRange originRange; // @synthesize originRange=_originRange;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *eventTypeIdentifier; // @synthesize eventTypeIdentifier=_eventTypeIdentifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

