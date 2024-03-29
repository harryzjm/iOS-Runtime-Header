//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIView;
@protocol WebAllowDenyPolicyListener;

__attribute__((visibility("hidden")))
@interface _UIWebGeolocationChallengeData : NSObject
{
    NSString *_userVisibleDomain;
    NSString *_token;
    NSURL *_requestingURL;
    UIView *_view;
    id <WebAllowDenyPolicyListener> _listener;
}

@property(retain, nonatomic) id <WebAllowDenyPolicyListener> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSURL *requestingURL; // @synthesize requestingURL=_requestingURL;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *userVisibleDomain; // @synthesize userVisibleDomain=_userVisibleDomain;
- (void)dealloc;

@end

