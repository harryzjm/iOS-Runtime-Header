//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLComponents.h>

@interface NSURLComponents (ParsecExtras)
+ (id)parsec_componentsWithString:(id)arg1;
+ (id)parsec_componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;
- (id)parsec_componentsForEmbeddedAMPURL;
- (id)parsec_normalizedURLStringForDeepLinkWhitelist;
- (id)parsec_normalizedURLStringForDeepLinkIngest;
- (id)parsec_normalizedURLStringForLDAModel;
- (id)parsec_normalizedURLStringForTLDFeatures;
- (id)parsec_normalizedURLStringWithOptions:(unsigned long long)arg1;
@end

