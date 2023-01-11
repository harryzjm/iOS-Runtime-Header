//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLUniformTypeIdentifierIdentity-Protocol.h>

@class NSString;

@interface PLInMemoryOnlyUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>
{
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool isPlayableVideo;
@property(readonly, nonatomic, getter=isPrimaryImageFormat) _Bool primaryImageFormat;
@property(readonly, nonatomic) _Bool conformsToRawImage;
@property(readonly, nonatomic) _Bool conformsToMovie;
@property(readonly, nonatomic) _Bool conformsToImage;
- (_Bool)conformsToAudio;
- (_Bool)conformsToJPEG;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
