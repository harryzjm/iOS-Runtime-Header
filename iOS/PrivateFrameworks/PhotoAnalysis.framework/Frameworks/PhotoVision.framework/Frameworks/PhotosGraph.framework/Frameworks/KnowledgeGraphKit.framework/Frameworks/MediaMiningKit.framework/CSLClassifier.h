//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CSLClassifier : NSObject
{
    _Bool _tfidf;
    _Bool _scaling;
    NSString *_key;
    NSArray *_maxTf;
    NSDictionary *_df;
}

+ (id)identifierForEventType:(long long)arg1;
+ (long long)eventTypeForIdentifier:(id)arg1;
@property _Bool scaling; // @synthesize scaling=_scaling;
@property _Bool tfidf; // @synthesize tfidf=_tfidf;
@property(retain) NSDictionary *df; // @synthesize df=_df;
@property(retain) NSArray *maxTf; // @synthesize maxTf=_maxTf;
@property(retain) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (float)getTfIdfForFeature:(id)arg1 maxTf:(float)arg2 sizeCorpus:(int)arg3 frequency:(float)arg4;
- (id)getMaxTfFrom:(id)arg1;
- (id)getDocumentFrequencyFrom:(id)arg1;
- (id)standardDeviationOf:(id)arg1;
- (id)meanOf:(id)arg1;
- (id)bestCategoriesFromPredictions:(id)arg1;
- (float)evaluateOnTestingVectors:(id)arg1;
- (id)classifyFeatureVector:(id)arg1;
- (void)trainOnFeatureVectors:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)init;

@end
