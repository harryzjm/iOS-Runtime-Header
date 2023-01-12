//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SBKResponse.h"

@class SBKSyncResponseData;

__attribute__((visibility("hidden")))
@interface SBKSyncResponse : SBKResponse
{
    SBKSyncResponseData *_syncResponseData;
}

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBKSyncResponseData *syncResponseData; // @synthesize syncResponseData=_syncResponseData;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;

@end

