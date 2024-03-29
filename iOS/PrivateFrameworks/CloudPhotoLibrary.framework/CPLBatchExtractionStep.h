//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CPLBatchExtractionStrategyStorage;

__attribute__((visibility("hidden")))
@interface CPLBatchExtractionStep : NSObject
{
    id <CPLBatchExtractionStrategyStorage> _storage;
    NSString *_scopeIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *scopeIdentifier; // @synthesize scopeIdentifier=_scopeIdentifier;
@property(readonly, nonatomic) id <CPLBatchExtractionStrategyStorage> storage; // @synthesize storage=_storage;
- (id)description;
- (id)shortDescription;
- (void)resetConditionallyFromNewIncomingChange:(id)arg1;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (void)reset;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2;

@end

