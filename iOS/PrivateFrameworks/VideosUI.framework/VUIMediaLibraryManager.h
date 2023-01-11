//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIHomeShareMediaLibraryManagerDelegate-Protocol.h>

@class NSArray, NSString, VUIDeviceMediaLibrary, VUIMediaLibrary;
@protocol OS_dispatch_queue, VUIHomeShareMediaLibraryManager;

@interface VUIMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManagerDelegate>
{
    VUIMediaLibrary *_activeMediaLibrary;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    VUIDeviceMediaLibrary *_deviceMediaLibrary;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSObject<VUIHomeShareMediaLibraryManager> *_homeShareManager;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSObject<VUIHomeShareMediaLibraryManager> *homeShareManager; // @synthesize homeShareManager=_homeShareManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary; // @synthesize deviceMediaLibrary=_deviceMediaLibrary;
- (void).cxx_destruct;
- (void)_postHomeShareMediaLibrariesDidChangeNotificationWithMediaLibraries:(id)arg1 andChangeSet:(id)arg2;
- (id)_homeShareMediaLibraryManager;
- (id)_mediaLibraryForIdentifier:(id)arg1;
- (void)_configureGlobalMediaPlayerOptions;
- (void)_enqueueStrongSelfCompletionQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;
- (void)homeShareManager:(id)arg1 mediaLibrariesDidUpdate:(id)arg2 withChangeSet:(id)arg3;
- (id)_deviceMediaLibrary;
- (id)mediaLibraryForIdentifier:(id)arg1;
@property(retain) VUIMediaLibrary *activeMediaLibrary; // @synthesize activeMediaLibrary=_activeMediaLibrary;
@property(readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

