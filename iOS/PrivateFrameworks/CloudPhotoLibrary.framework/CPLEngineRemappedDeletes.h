//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSMutableDictionary, NSString;

@interface CPLEngineRemappedDeletes <CPLAbstractObject>
{
    NSMutableDictionary *_perTransactionRemappedIdentifiers;
}

- (void).cxx_destruct;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)resetWithError:(id *)arg1;
- (id)realIdentifierForRemappedIdentifier:(id)arg1;
- (void)discardDeleteForRemappedRecordWithIdentifier:(id)arg1;
- (void)scheduleDeleteForRemappedRecordWithIdentifier:(id)arg1 realIdentifier:(id)arg2 asap:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

