//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol SVVideoPlaybackController, SVVideoProviderProviding;

@interface SVLearnMoreInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory>
{
    id <SVVideoPlaybackController> _playbackController;
    id <SVVideoProviderProviding> _videoProviderProviding;
}

@property(readonly, nonatomic) id <SVVideoProviderProviding> videoProviderProviding; // @synthesize videoProviderProviding=_videoProviderProviding;
@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoProviderProviding:(id)arg1 playbackController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

