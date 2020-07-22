//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineIDMapping <CPLAbstractObject>
{
}

- (_Bool)resetWithError:(id *)arg1;
- (_Bool)resetAllFinalCloudIdentifiersWithError:(id *)arg1;
- (_Bool)addAddEventForRecordWithLocalIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addDeleteEventForRecordWithLocalIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)removeMappingForCloudIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)hasPendingIdentifiers;
- (_Bool)markAllPendingIdentifiersAsFinalWithError:(id *)arg1;
- (_Bool)setFinalCloudIdentifier:(id)arg1 forPendingCloudIdentifier:(id)arg2 error:(id *)arg3;
- (id)setupCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)addCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;
- (id)localIdentifierForCloudIdentifierIncludeRemappedRecords:(id)arg1;
- (id)localIdentifierForCloudIdentifier:(id)arg1 isFinal:(_Bool *)arg2;
- (id)cloudIdentifierForLocalIdentifier:(id)arg1 isFinal:(_Bool *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

