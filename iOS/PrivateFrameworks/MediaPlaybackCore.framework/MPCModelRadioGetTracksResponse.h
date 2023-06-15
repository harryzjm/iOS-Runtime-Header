//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedCollection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioGetTracksResponse : NSObject
{
    long long _tracklistAction;
    MPSectionedCollection *_tracks;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MPSectionedCollection *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) long long tracklistAction; // @synthesize tracklistAction=_tracklistAction;
- (id)description;
- (id)initWithTracks:(id)arg1 tracklistAction:(long long)arg2;

@end

