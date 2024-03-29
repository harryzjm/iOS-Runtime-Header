//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SBKResponse.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKPullValueResponse : SBKResponse
{
    NSString *_itemKey;
    NSString *_itemVersion;
    NSData *_itemValuePayload;
    NSString *_domainVersion;
}

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *domainVersion; // @synthesize domainVersion=_domainVersion;
@property(readonly, nonatomic) NSData *itemValuePayload; // @synthesize itemValuePayload=_itemValuePayload;
@property(readonly, nonatomic) NSString *itemVersion; // @synthesize itemVersion=_itemVersion;
@property(readonly, nonatomic) NSString *itemKey; // @synthesize itemKey=_itemKey;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;

@end

