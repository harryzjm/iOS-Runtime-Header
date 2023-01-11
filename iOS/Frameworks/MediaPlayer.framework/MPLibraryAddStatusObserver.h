//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICUserIdentity, MPCloudController, MPCloudServiceStatusController, MPModelObject;

@interface MPLibraryAddStatusObserver : NSObject
{
    _Bool _needsStatusUpdate;
    MPCloudController *_cloudController;
    MPCloudServiceStatusController *_cloudServiceStatusController;
    struct MPLibraryAddStatusObserverConfiguration _configuration;
    long long _currentStatus;
    CDUnknownBlockType _statusBlock;
    MPModelObject *_identifyingModelObject;
    ICUserIdentity *_userIdentity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) MPModelObject *identifyingModelObject; // @synthesize identifyingModelObject=_identifyingModelObject;
@property(readonly, nonatomic) struct MPLibraryAddStatusObserverConfiguration configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(readonly, nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
- (void)_updateCurrentStatus;
- (long long)_calculateCurrentStatus;
- (void)_updateInProgressDidChangeNotification:(id)arg1;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_cloudLibraryEnabledDidChangeNotification:(id)arg1;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (void)setConfiguration:(struct MPLibraryAddStatusObserverConfiguration)arg1 identifyingModelObject:(id)arg2;
- (void)configureWithModelObject:(id)arg1;
- (void)dealloc;
- (id)initWithUserIdentity:(id)arg1;
- (id)init;

@end
