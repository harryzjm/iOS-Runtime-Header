//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelRequest.h>

@class MPSectionedCollection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioPersonalizationRequest : MPModelRequest
{
    MPSectionedCollection *_radioStationTracks;
    _Bool _analyticsSignpostsEnabled;
}

+ (_Bool)requiresNetwork;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool analyticsSignpostsEnabled; // @synthesize analyticsSignpostsEnabled=_analyticsSignpostsEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRadioStationTracks:(id)arg1;
- (id)init;

@end

