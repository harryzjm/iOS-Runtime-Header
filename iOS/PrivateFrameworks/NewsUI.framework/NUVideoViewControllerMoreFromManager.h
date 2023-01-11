//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/SVMoreFromPublisherActionTitleProviding-Protocol.h>
#import <NewsUI/SVMoreFromPublisherLogoProviding-Protocol.h>

@class NSString;
@protocol NUVideoCallToActionURLProviding;

@interface NUVideoViewControllerMoreFromManager : NSObject <SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding>
{
    id <NUVideoCallToActionURLProviding> _callToActionURLProvider;
}

@property(readonly, nonatomic) id <NUVideoCallToActionURLProviding> callToActionURLProvider; // @synthesize callToActionURLProvider=_callToActionURLProvider;
- (void).cxx_destruct;
- (id)_callToActionTitleForVideoItem:(id)arg1;
- (id)actionTitleForVideo:(id)arg1;
- (CDUnknownBlockType)moreFromLogoForVideo:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithCallToActionURLProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

