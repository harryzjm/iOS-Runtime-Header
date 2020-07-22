//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEventForGeocode-Protocol.h>

@class NSArray, NSData, NSSet, NSString, SGDuplicateKey, SGRecordId, SGSimpleTimeRange;

@interface SGStorageEvent : NSObject <SGEventForGeocode>
{
    _Bool _curated;
    unsigned int _state;
    SGRecordId *_recordId;
    SGDuplicateKey *_duplicateKey;
    NSString *_sourceKey;
    NSString *_content;
    NSString *_title;
    struct SGUnixTimestamp_ _creationTimestamp;
    struct SGUnixTimestamp_ _lastModifiedTimestamp;
    SGSimpleTimeRange *_when;
    NSArray *_locations;
    NSSet *_tags;
    NSData *_structuredData;
}

+ (id)storageEventFromEntity:(id)arg1;
@property(readonly, nonatomic) _Bool curated; // @synthesize curated=_curated;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSData *structuredData; // @synthesize structuredData=_structuredData;
@property(readonly, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) SGSimpleTimeRange *when; // @synthesize when=_when;
@property(readonly, nonatomic) struct SGUnixTimestamp_ lastModifiedTimestamp; // @synthesize lastModifiedTimestamp=_lastModifiedTimestamp;
@property(readonly, nonatomic) struct SGUnixTimestamp_ creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property(readonly, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (void).cxx_destruct;
- (id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5;
- (id)geocodeLocations;
- (id)geocodeEndTimeZone;
- (id)geocodeEndDate;
- (id)geocodeStartTimeZone;
- (id)geocodeStartDate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToStorageEvent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)fieldsToSaveOnConfirmation;
- (id)extraKeyTag;
@property(readonly, nonatomic) NSString *opaqueKey;
- (_Bool)isAllDay;
- (_Bool)isCancelled;
- (_Bool)isFromSuggestions;
- (_Bool)isFromDataDetectors;
- (id)initWithRecordId:(id)arg1 duplicateKey:(id)arg2 sourceKey:(id)arg3 content:(id)arg4 title:(id)arg5 creationTimestamp:(struct SGUnixTimestamp_)arg6 lastModifiedTimestamp:(struct SGUnixTimestamp_)arg7 tags:(id)arg8 when:(id)arg9 locations:(id)arg10 structuredData:(id)arg11 state:(unsigned int)arg12 curated:(_Bool)arg13;
- (id)convertToEvent:(id)arg1;
- (id)convertToEventWithOrigin:(id)arg1;
- (id)urlFromTags;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

