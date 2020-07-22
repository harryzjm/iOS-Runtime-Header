//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MPModelObject;

@interface MPLibraryAddStatusObserver : NSObject
{
    struct MPLibraryAddStatusObserverConfiguration _configuration;
    unsigned long long _currentStatus;
    CDUnknownBlockType _statusBlock;
    MPModelObject *_identifyingModelObject;
}

@property(readonly, nonatomic) MPModelObject *identifyingModelObject; // @synthesize identifyingModelObject=_identifyingModelObject;
@property(readonly, nonatomic) struct MPLibraryAddStatusObserverConfiguration configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(readonly, nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
- (void).cxx_destruct;
- (void)_updateCurrentStatus;
- (unsigned long long)_calculateCurrentStatus;
- (void)_updateInProgressDidChangeNotification:(id)arg1;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_cloudLibraryEnabledDidChangeNotification:(id)arg1;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (void)setConfiguration:(struct MPLibraryAddStatusObserverConfiguration)arg1 identifyingModelObject:(id)arg2;
- (void)configureWithModelObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end
