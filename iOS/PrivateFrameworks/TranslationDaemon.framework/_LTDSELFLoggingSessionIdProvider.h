//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, SISchemaUUID;

__attribute__((visibility("hidden")))
@interface _LTDSELFLoggingSessionIdProvider : NSObject
{
    SISchemaUUID *_cachedSessionId;
    NSDate *_dateSessionIdMostRecentlyAccessesOrCreated;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *dateSessionIdMostRecentlyAccessesOrCreated; // @synthesize dateSessionIdMostRecentlyAccessesOrCreated=_dateSessionIdMostRecentlyAccessesOrCreated;
@property(readonly, nonatomic) SISchemaUUID *sessionId;

@end

