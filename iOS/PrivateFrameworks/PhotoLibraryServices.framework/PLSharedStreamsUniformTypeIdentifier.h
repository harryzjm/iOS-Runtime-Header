//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLUniformTypeIdentifierIdentity-Protocol.h>

@class NSString;

@interface PLSharedStreamsUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>
{
    _Bool _conformsToRawImage;
    _Bool _conformsToImage;
    _Bool _conformsToMovie;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool conformsToMovie; // @synthesize conformsToMovie=_conformsToMovie;
@property(nonatomic) _Bool conformsToImage; // @synthesize conformsToImage=_conformsToImage;
@property(nonatomic) _Bool conformsToRawImage; // @synthesize conformsToRawImage=_conformsToRawImage;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool isPlayableVideo;
@property(readonly, nonatomic, getter=isPrimaryImageFormat) _Bool primaryImageFormat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
