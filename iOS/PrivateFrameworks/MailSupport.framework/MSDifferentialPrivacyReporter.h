//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSMailDynamicDataAsset, NSString, _MSTTLReference;
@protocol MSDifferentialPrivacyDataSource, OS_dispatch_queue;

@interface MSDifferentialPrivacyReporter : NSObject
{
    NSString *_recordingKey;
    _MSTTLReference *_userDomains;
    id <MSDifferentialPrivacyDataSource> _dataSource;
    MSMailDynamicDataAsset *_mailDynamicData;
    CDUnknownBlockType _recordingHandler;
    NSObject<OS_dispatch_queue> *_recordingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordingQueue; // @synthesize recordingQueue=_recordingQueue;
@property(copy, nonatomic) CDUnknownBlockType recordingHandler; // @synthesize recordingHandler=_recordingHandler;
@property(retain, nonatomic) MSMailDynamicDataAsset *_mailDynamicData; // @synthesize _mailDynamicData;
@property(nonatomic) __weak id <MSDifferentialPrivacyDataSource> _dataSource; // @synthesize _dataSource;
@property(retain, nonatomic) _MSTTLReference *_userDomains; // @synthesize _userDomains;
@property(retain, nonatomic) NSString *_recordingKey; // @synthesize _recordingKey;
- (void).cxx_destruct;
- (id)_localeIdentifier;
- (void)_recordSenders:(id)arg1;
- (_Bool)_isUserAccountDomain:(id)arg1;
- (_Bool)_shouldRecordMailbox:(id)arg1;
- (void)reportSenderDomainForMessages:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

