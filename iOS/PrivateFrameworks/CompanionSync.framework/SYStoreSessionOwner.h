//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYSessionDelegate-Protocol.h>

@class NSDictionary, NSString, SYSession, SYStore;

__attribute__((visibility("hidden")))
@interface SYStoreSessionOwner : NSObject <SYSessionDelegate>
{
    NSDictionary *_context;
    NSDictionary *_idsOptions;
    SYStore *_store;
    CDUnknownBlockType _errorCallback;
    CDUnknownBlockType _onComplete;
    SYSession *_session;
}

@property(retain, nonatomic) SYSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback=_errorCallback;
@property(nonatomic) __weak SYStore *store; // @synthesize store=_store;
@property(copy, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (void)syncSession:(id)arg1 applyChanges:(struct NSArray *)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)syncSession:(id)arg1 rollbackChangesWithError:(id *)arg2;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isResetSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

