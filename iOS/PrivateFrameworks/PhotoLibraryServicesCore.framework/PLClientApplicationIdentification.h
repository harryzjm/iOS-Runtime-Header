//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServicesCore/PLClientIdentification-Protocol.h>

@class NSString;

@interface PLClientApplicationIdentification : NSObject <PLClientIdentification>
{
    CDStruct_4c969caf _clientAuditToken;
    int _clientProcessIdentifier;
    NSString *_trustedCallerBundleID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *trustedCallerBundleID;
@property(readonly, nonatomic) int clientProcessIdentifier;
@property(readonly, nonatomic) CDStruct_4c969caf clientAuditToken;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
