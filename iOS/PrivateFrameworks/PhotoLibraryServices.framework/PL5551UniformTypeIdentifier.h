//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLUniformTypeIdentifierIdentity-Protocol.h>

@class NSString;

@interface PL5551UniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>
{
}

@property(readonly, nonatomic) _Bool isPlayableVideo;
@property(readonly, nonatomic, getter=isPrimaryImageFormat) _Bool primaryImageFormat;
@property(readonly, nonatomic) _Bool conformsToMovie;
@property(readonly, nonatomic) _Bool conformsToImage;
@property(readonly, nonatomic) _Bool conformsToRawImage;
@property(readonly, copy, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
