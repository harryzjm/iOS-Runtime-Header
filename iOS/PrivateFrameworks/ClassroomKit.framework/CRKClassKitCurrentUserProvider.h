//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRKCancelable, CRKClassKitCurrentUser, CRKClassKitFacade;

@interface CRKClassKitCurrentUserProvider : NSObject
{
    _Bool _currentUserFetched;
    id <CRKClassKitCurrentUser> _currentUser;
    NSObject<CRKClassKitFacade> *_classKitFacade;
    id <CRKCancelable> _currentUserSubscription;
    unsigned long long _sequenceNumber;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) id <CRKCancelable> currentUserSubscription; // @synthesize currentUserSubscription=_currentUserSubscription;
@property(readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade; // @synthesize classKitFacade=_classKitFacade;
@property(nonatomic) _Bool currentUserFetched; // @synthesize currentUserFetched=_currentUserFetched;
@property(retain, nonatomic) id <CRKClassKitCurrentUser> currentUser; // @synthesize currentUser=_currentUser;
- (_Bool)isSafeToTalkToProgressdWithAccountState:(long long)arg1;
- (void)safeFetchCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)performKVOUpdateForKeyPaths:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)updateCurrentUser:(id)arg1 fetched:(_Bool)arg2;
- (void)updateCurrentUser;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingCurrentUser;
- (void)startObservingCurrentUser;
- (id)initWithClassKitFacade:(id)arg1;
- (void)dealloc;

@end
