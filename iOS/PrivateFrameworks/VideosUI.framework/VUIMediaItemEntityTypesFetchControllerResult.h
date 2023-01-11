//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchResponseChanges;

@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject
{
    long long _fetchReason;
    VUIMediaItemEntityTypesFetchResponse *_fetchResponse;
    VUIMediaItemEntityTypesFetchResponseChanges *_fetchChanges;
}

@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponseChanges *fetchChanges; // @synthesize fetchChanges=_fetchChanges;
@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *fetchResponse; // @synthesize fetchResponse=_fetchResponse;
@property(nonatomic) long long fetchReason; // @synthesize fetchReason=_fetchReason;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFetchReason:(long long)arg1 fetchResponse:(id)arg2;
- (id)init;

@end

