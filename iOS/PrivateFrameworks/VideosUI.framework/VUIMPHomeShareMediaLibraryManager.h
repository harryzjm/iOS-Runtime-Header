//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIHomeShareMediaLibraryManager-Protocol.h>

@class NSArray, NSMutableArray, NSString, VUIMediaLibraryManager;
@protocol OS_dispatch_queue, VUIHomeShareMediaLibraryManagerDelegate;

__attribute__((visibility("hidden")))
@interface VUIMPHomeShareMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManager>
{
    id <VUIHomeShareMediaLibraryManagerDelegate> _delegate;
    VUIMediaLibraryManager *_manager;
    NSMutableArray *_mutableHomeShareMediaLibraries;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
}

+ (id)_sharedMPMediaLibraries;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) NSMutableArray *mutableHomeShareMediaLibraries; // @synthesize mutableHomeShareMediaLibraries=_mutableHomeShareMediaLibraries;
@property(nonatomic) __weak VUIMediaLibraryManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <VUIHomeShareMediaLibraryManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateHomeShareMediaLibrariesDidUpdate:(id)arg1 withChangeSet:(id)arg2;
- (void)_updateMediaLibrariesWithSharedMPMediaLibraries:(id)arg1;
- (id)_homeShareMediaLibraries;
- (void)_handleAvailableMediaLibrariesDidChange:(id)arg1;
- (void)endDiscoveringMediaLibraries;
- (void)beginDiscoveringMediaLibraries;
@property(readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
