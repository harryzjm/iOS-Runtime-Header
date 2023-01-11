//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NTKAVListing-Protocol.h>

@class CLKDevice, CLKVideo, NSString, NTKInfinityListingAttributes, UIImage;

@interface NTKInfinityListing : NSObject <NSCopying, NTKAVListing>
{
    CLKDevice *_device;
    NSString *_filename;
    CLKVideo *_video;
    UIImage *_image;
    unsigned long long _type;
    unsigned long long _playback;
    NTKInfinityListingAttributes *_attributes;
}

+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2 type:(unsigned long long)arg3 attributes:(id)arg4;
+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2;
@property(retain, nonatomic) NTKInfinityListingAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) unsigned long long playback; // @synthesize playback=_playback;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)complicationColor;
- (void)discardAssets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)snapshotDiffers:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) CLKVideo *video;
@property(readonly, nonatomic) UIImage *image;
- (id)initForDevice:(id)arg1 withFilename:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

