//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSString;

@protocol PLClientAuthorization <NSObject>
@property(readonly, nonatomic, getter=isClientLimitedLibraryCapable) _Bool clientLimitedLibraryCapable;
@property(readonly, nonatomic) _Bool limitedLibraryMode;
@property(readonly, nonatomic) _Bool cloudInternalEntitled;
@property(readonly, nonatomic) _Bool directDatabaseWriteAuthorized;
@property(readonly, nonatomic) _Bool directDatabaseAccessAuthorized;
@property(readonly, nonatomic) CDStruct_4c969caf clientAuditToken;
@property(readonly, nonatomic) _Bool photoKitEntitled;
@property(readonly, nonatomic) int clientProcessIdentifier;
@property(readonly, nonatomic) NSString *trustedCallerPhotoLibraryUsageDescription;
@property(readonly, nonatomic) NSString *trustedCallerDisplayName;
@property(readonly, nonatomic) NSString *fetchFilterIdentifier;
@property(readonly, nonatomic) NSString *trustedCallerBundleID;
- (_Bool)photoKitEntitledFor:(NSString *)arg1;
@end
