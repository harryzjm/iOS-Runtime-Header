//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMMediaSession, NSString;
@protocol _HMMediaProfileDelegate;

@interface _HMMediaProfile
{
    HMMediaSession *_mediaSession;
    NSString *_routeUID;
    unsigned long long _capability;
    id <_HMMediaProfileDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property __weak id <_HMMediaProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long long capability; // @synthesize capability=_capability;
- (void)setRouteUID:(id)arg1;
@property(readonly) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void)_notifyDelegateOfUpdatedMediaSession:(id)arg1;
@property(retain) HMMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;

@end
