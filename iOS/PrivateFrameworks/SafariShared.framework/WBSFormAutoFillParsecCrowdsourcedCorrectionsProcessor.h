//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject
{
}

+ (id)test_correctionsSchema;
+ (id)_schemaWithExpectedClass:(Class)arg1 errorCode:(long long)arg2 isOptional:(_Bool)arg3;
+ (id)_correctionsSchema;
- (id)_correctionsStore;
- (void)setCorrectionsWithJSONData:(id)arg1 retrievalURLString:(id)arg2;
- (void)getLastCorrectionsRetrievalURLStringWithResultHandler:(CDUnknownBlockType)arg1;

@end

