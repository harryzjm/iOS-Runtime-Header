//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SignpostEvent;

@interface SignpostInterval
{
    SignpostEvent *_beginEvent;
    SignpostEvent *_endEvent;
}

+ (id)serializationTypeNumber;
- (void).cxx_destruct;
@property(retain, nonatomic) SignpostEvent *endEvent; // @synthesize endEvent=_endEvent;
@property(retain, nonatomic) SignpostEvent *beginEvent; // @synthesize beginEvent=_beginEvent;
- (id)debugDescription;
- (id)_eventDescriptions;
- (float)durationSeconds;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2;
- (int)tz_dsttime;
- (int)tz_minuteswest;
- (int)tv_usec;
- (long long)tv_sec;
- (_Bool)telemetryEnabled;
- (id)number2Value;
- (id)number2Name;
- (id)number1Value;
- (id)number1Name;
- (id)string2Value;
- (id)string2Name;
- (id)string1Value;
- (id)string1Name;
- (unsigned long long)scope;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
- (_Bool)endTimezone:(struct timezone *)arg1;
- (_Bool)beginTimezone:(struct timezone *)arg1;
- (_Bool)_hasEndTimeval;
- (_Bool)_hasBeginTimeval;
- (void)_adjustEndTimeVal:(struct timeval *)arg1;
- (void)_adjustBeginTimeVal:(struct timeval *)arg1;
- (id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(_Bool)arg3;
@property(readonly, nonatomic) NSString *_intervalTypeString;
@property(readonly, nonatomic) _Bool isSyntheticInterval;
- (id)humanReadableType;
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;

@end
