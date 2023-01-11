//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class AVControlItem, NSString;
@protocol SVVideoSharingPolicy;

@interface SVShareButtonManager : NSObject <SVVideoTransitionObserver>
{
    AVControlItem *_controlItem;
    id <SVVideoSharingPolicy> _sharingPolicy;
}

@property(readonly, nonatomic) id <SVVideoSharingPolicy> sharingPolicy; // @synthesize sharingPolicy=_sharingPolicy;
@property(readonly, nonatomic) AVControlItem *controlItem; // @synthesize controlItem=_controlItem;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithShareControlItem:(id)arg1 sharingPolicy:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

