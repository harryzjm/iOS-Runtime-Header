//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PPNamedEntityRecordLoadingDelegate
{
    CDUnknownBlockType _namedEntityRecordsSetup;
    CDUnknownBlockType _namedEntityRecordsHandler;
    CDUnknownBlockType _namedEntityRecordsCompletion;
    CDUnknownBlockType _recentNamedEntityRecordsSetup;
    CDUnknownBlockType _recentNamedEntityRecordsHandler;
    CDUnknownBlockType _recentNamedEntityRecordsCompletion;
    CDUnknownBlockType _resetNamedEntityRecordData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resetNamedEntityRecordData; // @synthesize resetNamedEntityRecordData=_resetNamedEntityRecordData;
@property(copy, nonatomic) CDUnknownBlockType recentNamedEntityRecordsCompletion; // @synthesize recentNamedEntityRecordsCompletion=_recentNamedEntityRecordsCompletion;
@property(copy, nonatomic) CDUnknownBlockType recentNamedEntityRecordsHandler; // @synthesize recentNamedEntityRecordsHandler=_recentNamedEntityRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType recentNamedEntityRecordsSetup; // @synthesize recentNamedEntityRecordsSetup=_recentNamedEntityRecordsSetup;
@property(copy, nonatomic) CDUnknownBlockType namedEntityRecordsCompletion; // @synthesize namedEntityRecordsCompletion=_namedEntityRecordsCompletion;
@property(copy, nonatomic) CDUnknownBlockType namedEntityRecordsHandler; // @synthesize namedEntityRecordsHandler=_namedEntityRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType namedEntityRecordsSetup; // @synthesize namedEntityRecordsSetup=_namedEntityRecordsSetup;
- (void)resetRecordData;
- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)arg1;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingHandler:(id)arg1;
- (unsigned char)recordLoadingSetup;
- (id)description;
- (id)initWithName:(id)arg1;

@end
