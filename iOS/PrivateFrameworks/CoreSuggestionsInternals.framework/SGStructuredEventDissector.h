//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/SGMailMessageProcessing-Protocol.h>

@class NSString;

@interface SGStructuredEventDissector <SGMailMessageProcessing>
{
}

+ (id)outputLogsForClassification:(id)arg1;
+ (id)jsMessageLogsDictionaryForMailMessage:(id)arg1;
+ (void)logFailedExtractionWithClassification:(id)arg1 missingEntities:(id)arg2 mlSummary:(id)arg3 shadowExtraction:(_Bool)arg4 timingProcessingInMs:(unsigned long long)arg5 forMessage:(id)arg6 parentEntity:(id)arg7;
+ (void)logShadowLoggingForSchema:(id)arg1 parentEntity:(id)arg2 timingProcessingInMs:(unsigned long long)arg3 eventClassification:(id)arg4 mailMessage:(id)arg5;
+ (id)eventEnrichmentFromEntity:(id)arg1;
+ (id)addressDictionaryForAddressComponents:(id)arg1;
+ (id)schemaPostalAddressForPostalAddressExtraction:(id)arg1;
+ (id)schemaStringForEventStatus:(unsigned char)arg1;
+ (id)schemaStringForReservationStatus:(unsigned char)arg1;
+ (id)schemaStringForDateComponents:(id)arg1;
+ (id)plainTextStringsByLabelInTaggedCharacterRanges:(id)arg1 inPlainText:(id)arg2;
+ (id)annotateContent:(id)arg1 withLabel:(id)arg2 forMatchingString:(id)arg3;
+ (id)labelsWithMatchingStringsForMailMessage:(id)arg1;
+ (id)annotationMatchingStringsForSubject:(id)arg1;
+ (id)tupleWithError:(id)arg1 label:(id)arg2;
+ (id)tupleWithEntity:(id)arg1 label:(id)arg2;
+ (id)nilEntities:(id)arg1;
+ (id)preprocessWithoutXPCForHTML:(id)arg1 subject:(id)arg2 epoch:(double)arg3 category:(id)arg4 labelsWithMatchingStrings:(id)arg5;
+ (id)preprocessDomParserResult:(id)arg1 subject:(id)arg2 epoch:(double)arg3 category:(id)arg4 labelsWithMatchingStrings:(id)arg5;
+ (id)schemaOrgAndMissingEntitiesForPreprocessed:(id)arg1 eventClassification:(id)arg2 fromSuggestTool:(_Bool)arg3;
+ (void)addSchemaAsEnrichment:(id)arg1 inMessage:(id)arg2 parentEntity:(id)arg3 eventClassification:(id)arg4;
+ (id)sharedInstance;
- (id)tagsWithModelOutputFromEnrichedTaggedCharacterRanges:(id)arg1;
- (id)preprocessHTML:(id)arg1 subject:(id)arg2 epoch:(double)arg3 category:(id)arg4 labelsWithMatchingStrings:(id)arg5;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
