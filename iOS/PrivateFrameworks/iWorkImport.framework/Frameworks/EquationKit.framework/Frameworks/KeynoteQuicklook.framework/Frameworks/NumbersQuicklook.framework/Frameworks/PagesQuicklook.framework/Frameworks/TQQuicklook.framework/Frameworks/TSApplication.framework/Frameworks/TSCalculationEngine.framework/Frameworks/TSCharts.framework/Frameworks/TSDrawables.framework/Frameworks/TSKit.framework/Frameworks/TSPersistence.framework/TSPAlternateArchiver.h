//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPKnownFieldRuleProvider-Protocol.h>

@class NSString, TSPArchiverBase;

@interface TSPAlternateArchiver <TSPKnownFieldRuleProvider>
{
    RepeatedPtrField_02f83fb8 _fieldPathsToRemove;
    struct {
        unsigned int hasPreserveNewerValueRule:1;
        unsigned int hasPreserveNewerValueUntilModifiedRule:1;
    } _flags;
    _Bool _isDiff;
    const struct FieldPath *_fieldPath;
    unsigned long long _diffReadVersion;
    TSPArchiverBase *_parentArchiver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak TSPArchiverBase *parentArchiver; // @synthesize parentArchiver=_parentArchiver;
@property(readonly, nonatomic) unsigned long long diffReadVersion; // @synthesize diffReadVersion=_diffReadVersion;
@property(readonly, nonatomic) const struct FieldPath *fieldPath; // @synthesize fieldPath=_fieldPath;
@property(readonly, nonatomic) _Bool isDiff; // @synthesize isDiff=_isDiff;
- (void)enumerateKnownFieldRulesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isContentUnknown;
- (_Bool)isSavingCollaborativeDocument;
- (_Bool)isSavingDocumentAs;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int *)arg3 message:(const struct Message *)arg4;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 field:(int)arg3 message:(const struct Message *)arg4;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const struct Message *)arg3;
- (id)parentAlternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int *)arg3 message:(const struct Message *)arg4;
- (void)removeFieldAtEndOfPath:(int *)arg1 message:(const struct Message *)arg2;
- (void)removeField:(int)arg1 message:(const struct Message *)arg2;
- (void)p_setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const struct Message *)arg4;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const struct Message *)arg4;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const struct Message *)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const struct Message *)arg4;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const struct Message *)arg3;
- (void)p_setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const struct Message *)arg4;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const struct Message *)arg4;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const struct Message *)arg3;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const struct Message *)arg4;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const struct Message *)arg3;
- (const struct FieldPath *)baseFieldPathAndReturnShouldDeleteReturnedValue:(_Bool *)arg1;
@property(readonly, nonatomic) const RepeatedPtrField_02f83fb8 *fieldPathsToRemove;
- (void)dealloc;
- (id)initWithObject:(id)arg1 version:(unsigned long long)arg2 fieldPath:(const struct FieldPath *)arg3 isDiff:(_Bool)arg4 diffReadVersion:(unsigned long long)arg5 parentArchiver:(id)arg6;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
