//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUSourceDefinition;

@interface NULivePhotoSourceDefinition
{
    NUSourceDefinition *_image;
    NUSourceDefinition *_video;
}

- (void).cxx_destruct;
@property(readonly) NUSourceDefinition *video; // @synthesize video=_video;
@property(readonly) NUSourceDefinition *image; // @synthesize image=_image;
- (id)description;
- (long long)mediaType;
- (id)initWithImageSourceDefinition:(id)arg1 videoSourceDefinition:(id)arg2;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end
