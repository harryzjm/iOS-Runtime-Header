//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol SVVideoPlaybackSkipping;

@interface SVSkipToNextInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory>
{
    id <SVVideoPlaybackSkipping> _playbackSkipper;
}

@property(readonly, nonatomic) id <SVVideoPlaybackSkipping> playbackSkipper; // @synthesize playbackSkipper=_playbackSkipper;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackSkipper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

