//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI33EngagementPresentationCoordinator : NSObject
{
    MISSING_TYPE *engagementClient;
    MISSING_TYPE *eventHub;
    MISSING_TYPE *messageCoordinator;
    MISSING_TYPE *subscriptionToken;
    MISSING_TYPE *engagementBannerRuleInfo;
    MISSING_TYPE *modalContextProvider;
    MISSING_TYPE *isActive;
}

- (void).cxx_destruct;
- (id)init;
- (id)viewControllerForModalPresentation;
- (id)contextPropertyWithName:(id)arg1;
@property(nonatomic, readonly) _Bool allowsModalMessageDisplay;

@end

