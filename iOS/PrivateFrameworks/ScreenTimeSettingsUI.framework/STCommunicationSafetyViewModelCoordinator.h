//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeSettingsUI/STCommunicationSafetyViewModelCoordinator-Protocol.h>
#import <ScreenTimeSettingsUI/STGroupFetchedResultsControllerDelegate-Protocol.h>

@class NSString, STCommunicationSafetyViewModel;

@interface STCommunicationSafetyViewModelCoordinator : NSObject <STCommunicationSafetyViewModelCoordinator, STGroupFetchedResultsControllerDelegate>
{
    STCommunicationSafetyViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly) STCommunicationSafetyViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)persistCommunicationSafetySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPersistenceController:(id)arg1 userDSID:(id)arg2;
- (id)initWithPersistenceController:(id)arg1 userDSID:(id)arg2 modelUpdatedHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
