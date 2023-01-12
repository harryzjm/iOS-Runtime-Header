//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SBKResponse.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKPushValueResponse : SBKResponse
{
    NSString *_domainVersion;
    NSData *_conflictItemValuePayload;
    NSString *_conflictItemKey;
    NSString *_conflictItemVersionAnchor;
}

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *conflictItemVersionAnchor; // @synthesize conflictItemVersionAnchor=_conflictItemVersionAnchor;
@property(readonly, nonatomic) NSString *conflictItemKey; // @synthesize conflictItemKey=_conflictItemKey;
@property(readonly, nonatomic) NSData *conflictItemValuePayload; // @synthesize conflictItemValuePayload=_conflictItemValuePayload;
@property(readonly, nonatomic) NSString *domainVersion; // @synthesize domainVersion=_domainVersion;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;

@end

