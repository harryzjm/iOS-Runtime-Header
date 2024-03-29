//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject
{
    NSMutableSet *_delegateIdentifiers;
    struct _opaque_pthread_mutex_t _delegateIdentifiersMutex;
}

- (void).cxx_destruct;
- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;
- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1;
- (id)identifierForServiceDelegate:(id)arg1;
- (id)awaitAcknowledgementFromServiceDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool isAwaitingAcknowledgement;
- (void)dealloc;
- (id)init;

@end

