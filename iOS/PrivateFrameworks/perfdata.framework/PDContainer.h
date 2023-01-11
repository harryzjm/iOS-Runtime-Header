//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface PDContainer : NSObject
{
    _Bool _largerBetter;
    NSString *_name;
    unsigned long long _version;
    NSDictionary *_configuration;
    NSMutableDictionary *_extensions;
    NSString *_testDescription;
    NSString *_notes;
    NSString *_primaryMetricFilter;
    NSString *_generator;
    NSDictionary *_variables;
    NSMutableDictionary *_perfdata;
}

+ (id)containerWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)containerWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)containerWithFileURL:(id)arg1 error:(id *)arg2;
+ (id)containerWithPath:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableDictionary *perfdata; // @synthesize perfdata=_perfdata;
@property(nonatomic) _Bool largerBetter; // @synthesize largerBetter=_largerBetter;
@property(retain, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(retain, nonatomic) NSString *generator; // @synthesize generator=_generator;
@property(readonly, retain, nonatomic) NSString *primaryMetricFilter; // @synthesize primaryMetricFilter=_primaryMetricFilter;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSString *testDescription; // @synthesize testDescription=_testDescription;
@property(retain, nonatomic) NSMutableDictionary *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)aggregateMeasurementsMatchingFilter:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateAggregatedMeasurementsMatchingNullableFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)enumerateAggregatedMeasurementsIgnoringVariables:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateAggregatedMeasurementsMatchingFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)enumerateMeasurementsMatchingNullableFilter:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateMeasurementsMatchingFilter:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateMeasurementsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long measurementCount;
- (_Bool)isLike:(id)arg1;
- (_Bool)isComparableTo:(id)arg1;
- (id)description;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithJSONData:(id)arg1 error:(id *)arg2;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;

@end

