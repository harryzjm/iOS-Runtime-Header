//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPStaticArtworkVisualIdenticalityIdentifier : NSObject
{
    NSString *_imageArtworkIdentifier;
    NSString *_videoArtworkIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoArtworkIdentifier; // @synthesize videoArtworkIdentifier=_videoArtworkIdentifier;
@property(copy, nonatomic) NSString *imageArtworkIdentifier; // @synthesize imageArtworkIdentifier=_imageArtworkIdentifier;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

