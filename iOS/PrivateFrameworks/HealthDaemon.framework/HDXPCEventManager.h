//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDXPCEventPublisher;

@interface HDXPCEventManager : NSObject
{
    HDXPCEventPublisher *_authorizationPublisher;
}

- (void).cxx_destruct;
- (void)authorizationChangedForBundleIdentifier:(id)arg1;
- (id)init;

@end
