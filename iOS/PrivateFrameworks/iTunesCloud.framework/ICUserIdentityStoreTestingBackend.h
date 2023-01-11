//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICUserIdentityStoreBackend-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString;
@protocol ICUserIdentityStoreBackendDelegate;

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend>
{
    NSNumber *_activeAccountDSID;
    NSNumber *_activeLockerAccountDSID;
    NSMutableDictionary *_identityProperties;
    id <ICUserIdentityStoreBackendDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
+ (void)setDefaultActiveLockerAccountDSID:(id)arg1;
+ (void)setDefaultActiveAccountDSID:(id)arg1;
@property(nonatomic) __weak id <ICUserIdentityStoreBackendDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_propertiesToSaveForProperties:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)verificationContextForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verificationContextForAccountEstablishmentWithCompletion:(CDUnknownBlockType)arg1;
- (void)synchronize;
- (void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeIdentityForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)identityPropertiesForPrimaryICloudAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)identityPropertiesForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateActiveLockerAccountDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeLockerAccountDSIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateActiveAccountDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeAccountDSIDWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

