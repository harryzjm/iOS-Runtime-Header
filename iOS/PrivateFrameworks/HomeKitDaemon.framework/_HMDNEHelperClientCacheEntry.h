//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HMDNEHelperClientCacheEntry : NSObject
{
    NSString *_signingId;
    NSArray *_identifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) NSString *signingId; // @synthesize signingId=_signingId;
- (id)initWithSigningId:(id)arg1 identifiers:(id)arg2;

@end

