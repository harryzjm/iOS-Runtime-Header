//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSUndoManager, VSAccountStore;
@protocol OS_dispatch_queue;

@interface VSAccountChannelsCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSURL *_fileURL;
    VSAccountStore *_accountStore;
    NSString *_fileName;
    NSURL *_directoryURL;
    CDUnknownBlockType _identityProviderFetchOperationBlock;
}

+ (id)_defaultFileName;
+ (id)_defaultDirectoryURL;
+ (id)_accountChannelsWithProviderID:(id)arg1;
+ (void)_startOperationAndWaitForCompletion:(id)arg1;
+ (id)sharedCenter;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType identityProviderFetchOperationBlock; // @synthesize identityProviderFetchOperationBlock=_identityProviderFetchOperationBlock;
@property(copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)fetchAccountChannelsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSUndoManager *undoManager;
- (void)_removeSavedAccountChannelsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_saveAccountChannels:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_saveAccountChannels:(id)arg1;
- (void)_enqueueSaveAccountChannelsAndWait:(id)arg1;
- (id)_removeSavedAccountChannels;
- (void)_enqueueRemoveSavedAccountChannelsAndWait;
- (id)_savedAccountChannels;
- (id)_savedAccountChannelsForIdentityProviderID:(id)arg1 storeIdentityProvider:(id)arg2;
- (id)_storeIdentityProviderForAccount:(id)arg1;
- (void)_snapshotPreviousChannels;
- (id)initWithAccountStore:(id)arg1;
- (id)init;

@end
