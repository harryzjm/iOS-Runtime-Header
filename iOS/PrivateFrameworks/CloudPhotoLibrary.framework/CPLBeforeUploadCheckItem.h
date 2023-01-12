//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLBeforeUploadCheckItems, CPLRecordChange, CPLResourceTypeSet, CPLScopedIdentifier, NSMutableDictionary, NSMutableSet, NSString;

@interface CPLBeforeUploadCheckItem : NSObject
{
    NSMutableSet *_rulesForExistenceCheck;
    NSMutableSet *_rulesForRecordFetch;
    NSMutableDictionary *_rulesForOtherRecordFetches;
    _Bool _hasCachedResultOfServerCheck;
    _Bool _recordExistsOnServer;
    CPLRecordChange *_recordOnServer;
    _Bool _checked;
    NSString *_dropReason;
    CPLResourceTypeSet *_resourcesToGenerateImageDerivatives;
    CPLResourceTypeSet *_resourcesToGenerateVideoComplementDerivatives;
    _Bool _needsToGenerateImageDerivatives;
    _Bool _needsToGenerateVideoComplementDerivatives;
    _Bool _isAsset;
    _Bool _isTrashedOrDeletedAsset;
    long long _ruleGroups;
    CPLScopedIdentifier *_scopedIdentifier;
    CPLRecordChange *_change;
    Class _changeClass;
    CPLBeforeUploadCheckItems *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak CPLBeforeUploadCheckItems *items; // @synthesize items=_items;
@property(readonly, nonatomic) _Bool isTrashedOrDeletedAsset; // @synthesize isTrashedOrDeletedAsset=_isTrashedOrDeletedAsset;
@property(readonly, nonatomic) _Bool isAsset; // @synthesize isAsset=_isAsset;
@property(readonly, nonatomic) Class changeClass; // @synthesize changeClass=_changeClass;
@property(readonly, nonatomic) CPLRecordChange *change; // @synthesize change=_change;
@property(readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier; // @synthesize scopedIdentifier=_scopedIdentifier;
@property(readonly, nonatomic) long long ruleGroups; // @synthesize ruleGroups=_ruleGroups;
- (id)redactedDescription;
- (id)description;
@property(readonly, nonatomic) unsigned long long estimatedResourceUploadSize;
- (_Bool)dropGeneratingDerivativesIfPossibleWithRecordOnServer:(id)arg1 error:(id *)arg2;
- (_Bool)_serverResourcesMatches:(id)arg1;
- (_Bool)rejectChangeWithReason:(id)arg1 error:(id *)arg2;
- (void)dropChangeWithReason:(id)arg1;
- (void)dropResourceChangeWithReason:(id)arg1;
- (_Bool)requestFullFetchOfRecordWithScopedIdentifier:(id)arg1 forRule:(id)arg2 error:(id *)arg3;
- (_Bool)requestFullFetchForRule:(id)arg1 error:(id *)arg2;
- (_Bool)requestExistenceCheckForRule:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasRequestedRecordCheck;
@property(readonly, nonatomic) _Bool hasRequestedRecordFetch;
- (_Bool)checkBeforeUploadWithError:(id *)arg1;
- (_Bool)_forAdditionalRecordRule:(id)arg1 check:(CDUnknownFunctionPointerType)arg2 error:(id *)arg3;
- (_Bool)_forRule:(id)arg1 check:(CDUnknownFunctionPointerType)arg2 error:(id *)arg3;
- (_Bool)prepareWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool needsToGenerateDerivatives;
- (id)initWithChange:(id)arg1 checkItems:(id)arg2;

@end
