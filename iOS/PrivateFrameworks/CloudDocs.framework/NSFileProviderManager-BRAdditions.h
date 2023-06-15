//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderManager.h>

@interface NSFileProviderManager (BRAdditions)
+ (id)_br_createNSFileProviderManagerForDataSeparated:(_Bool)arg1 withDomainID:(id)arg2 didMatchedDomain:(_Bool *)arg3;
+ (id)br_getLegacyEnterpriseProviderManager;
+ (id)br_getPrimaryProviderManager;
+ (id)br_getEnterpriseProviderManager;
+ (id)br_getProviderManagerForDataSeparated:(_Bool)arg1;
+ (id)br_sharedProviderManagerWithDomainID:(id)arg1;
+ (id)br_sharedProviderManager;
+ (id)br_getDomainForProvider:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
+ (id)br_getDomainForDataSeparated:(_Bool)arg1 withIdentifier:(id)arg2 withError:(id *)arg3;
+ (id)br_getDomainForCurrentPersonaWithError:(id *)arg1;
- (id)getFPDomainsWithError:(id *)arg1;
- (void)br_removeDomain:(id)arg1 options:(long long)arg2 sync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)br_removeDomain:(id)arg1 sync:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@end

