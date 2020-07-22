//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelResponse.h>

@class MPCModelGenericAVItemTimedMetadataStreamFields, MPSectionedCollection, NSData;

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse
{
    MPModelResponse *_personalizationResponse;
    NSData *_adamIDData;
    MPCModelGenericAVItemTimedMetadataStreamFields *_streamFields;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
}

@property(copy, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // @synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors;
@property(retain, nonatomic) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields; // @synthesize streamFields=_streamFields;
@property(copy, nonatomic) NSData *adamIDData; // @synthesize adamIDData=_adamIDData;
- (void).cxx_destruct;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;

@end

