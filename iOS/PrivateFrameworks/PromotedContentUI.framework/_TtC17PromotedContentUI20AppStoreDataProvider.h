//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <PromotedContentUI/APClientInfoDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC17PromotedContentUI20AppStoreDataProvider : _TtCs12_SwiftObject <APClientInfoDelegate>
{
    MISSING_TYPE *metadataExpirationTimer;
    MISSING_TYPE *storeFront;
    MISSING_TYPE *storeFrontLocale;
    MISSING_TYPE *subsequentRequestsDisabled;
    MISSING_TYPE *session;
    MISSING_TYPE *fetchingSession;
    MISSING_TYPE *theLock;
    MISSING_TYPE *lastFetch;
    MISSING_TYPE *searchAdsFacade;
    MISSING_TYPE *sessionPersistence;
    MISSING_TYPE *firstInitializeCall;
    MISSING_TYPE *greenTeaLogger;
    MISSING_TYPE *nextRequestContextId;
    MISSING_TYPE *initializedAt;
    MISSING_TYPE *previousGetAdAt;
}

- (void)activeClientInfoUpdated:(id)arg1;

@end
