//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCHeldRecords, NSArray, NSDictionary;
@protocol FCContentContext;

@interface FCWidgetConfigDataOperation
{
    id <FCContentContext> _context;
    NSDictionary *_widgetConfiguration;
    CDUnknownBlockType _widgetConfigDataCompletionHandler;
    NSArray *_recordSources;
    NSDictionary *_recordSourcesByRecordType;
    FCHeldRecords *_cachedRecords;
    NSDictionary *_resultDefaultConfigurationDictionary;
    NSDictionary *_resultSingleTagConfigurationDictionary;
    NSArray *_resultArticleIDs;
    NSArray *_resultArticleListIDs;
    NSDictionary *_resultHeldRecordsByType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *resultHeldRecordsByType; // @synthesize resultHeldRecordsByType=_resultHeldRecordsByType;
@property(retain, nonatomic) NSArray *resultArticleListIDs; // @synthesize resultArticleListIDs=_resultArticleListIDs;
@property(retain, nonatomic) NSArray *resultArticleIDs; // @synthesize resultArticleIDs=_resultArticleIDs;
@property(retain, nonatomic) NSDictionary *resultSingleTagConfigurationDictionary; // @synthesize resultSingleTagConfigurationDictionary=_resultSingleTagConfigurationDictionary;
@property(retain, nonatomic) NSDictionary *resultDefaultConfigurationDictionary; // @synthesize resultDefaultConfigurationDictionary=_resultDefaultConfigurationDictionary;
@property(retain, nonatomic) FCHeldRecords *cachedRecords; // @synthesize cachedRecords=_cachedRecords;
@property(retain, nonatomic) NSDictionary *recordSourcesByRecordType; // @synthesize recordSourcesByRecordType=_recordSourcesByRecordType;
@property(retain, nonatomic) NSArray *recordSources; // @synthesize recordSources=_recordSources;
@property(copy, nonatomic) CDUnknownBlockType widgetConfigDataCompletionHandler; // @synthesize widgetConfigDataCompletionHandler=_widgetConfigDataCompletionHandler;
@property(copy, nonatomic) NSDictionary *widgetConfiguration; // @synthesize widgetConfiguration=_widgetConfiguration;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (id)_recordSourceForRecordType:(id)arg1;
- (void)_finalizeResultFromCachedRecords;
- (void)_collectRecordsFromWidgetConfigDictionary:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end
