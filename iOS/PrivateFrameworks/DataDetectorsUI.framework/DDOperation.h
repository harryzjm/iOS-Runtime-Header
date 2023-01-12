//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface DDOperation : NSOperation
{
    id _container;
    _Bool _needContinuation;
    int _generationNumber;
    unsigned long long _types;
    struct __DDScanQuery *_query;
    NSArray *_results;
    _Bool _isDiscarded;
    int _tryCount;
    int _containerNotReadyTryCount;
    NSDictionary *_context;
    long long _jobIdentifier;
    _Bool _ignoreSignatures;
}

+ (_Bool)_needsFullScannerForDetectionTypes:(unsigned long long)arg1;
+ (CDUnknownBlockType)urlificationBlockForTypes:(unsigned long long)arg1;
+ (CDUnknownBlockType)shouldUrlifyBlockForTypes:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreSignatures; // @synthesize ignoreSignatures=_ignoreSignatures;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property _Bool isDiscarded; // @synthesize isDiscarded=_isDiscarded;
@property(nonatomic) unsigned long long detectionTypes; // @synthesize detectionTypes=_types;
@property int tryCount; // @synthesize tryCount=_tryCount;
@property int generationNumber; // @synthesize generationNumber=_generationNumber;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property _Bool needContinuation; // @synthesize needContinuation=_needContinuation;
@property(retain, nonatomic) id container; // @synthesize container=_container;
- (void)dispatchScanQueryCreationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)needsToStartOver;
- (_Bool)containerIsReady;
- (_Bool)needsFullScanner;
- (void)_setScanQuery:(struct __DDScanQuery *)arg1;
- (void)cleanup;
- (void)cancel;
- (void)main;
- (void)dispatchContainerModificationBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContainer:(id)arg1;
- (struct __DDScanQuery *)scanQuery;
- (_Bool)doURLificationOnDocument;
- (int)_createScanQuery;
- (struct __DDScanQuery *)_createScanQueryForBackend;
- (void)_updateGenerationNumber;
- (_Bool)_rangeValidForContainer;
- (_Bool)_containerReadyForDetection;
- (void)_applyContainerRestrictionsToTypes;

@end

