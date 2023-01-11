//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIDatabase;

@interface TRIContentTracker : NSObject
{
    TRIDatabase *_db;
}

+ (_Bool)decodeContentIdentifier:(id)arg1 experimentDeployment:(id *)arg2 treatmentId:(id *)arg3 container:(id *)arg4;
+ (id)contentIdentifierForTreatmentArtifactWithTreatmentId:(id)arg1 container:(id)arg2;
+ (id)contentIdentifierForExperimentArtifactWithDeployment:(id)arg1;
- (void).cxx_destruct;
- (_Bool)enumerateTrackedItemsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)clearRefsWithContentIdentifier:(id)arg1;
- (_Bool)refCountForContentIdentifier:(id)arg1 refCount:(long long *)arg2;
- (_Bool)dropRefWithContentIdentifier:(id)arg1;
- (_Bool)addRefWithContentIdentifier:(id)arg1;
- (_Bool)_addOrDropRefWithContentIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
- (id)initWithDatabase:(id)arg1;
- (struct _PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(CDUnknownBlockType)arg1;
- (struct _PASDBTransactionCompletion_)readTransactionWithFailableBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
