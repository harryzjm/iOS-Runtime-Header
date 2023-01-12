//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSManagedObjectContext, NSPersistentHistoryToken;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzer
{
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentHistoryToken *_lastProcessedToken;
}

+ (_Bool)isPrivateContextName:(id)arg1;
+ (_Bool)isPrivateTransactionAuthor:(id)arg1;
+ (_Bool)isPrivateTransaction:(id)arg1;
- (_Bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2;

@end
