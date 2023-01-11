//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIImageLoadParams-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>
{
    NSString *_imageIdentifier;
    NSURL *_imageURL;
    NSString *_baseImageIdentifier;
    unsigned long long _imageType;
}

@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(copy, nonatomic) NSString *baseImageIdentifier; // @synthesize baseImageIdentifier=_baseImageIdentifier;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
- (id)init;
- (id)initWithImageURL:(id)arg1 baseImageIdentifier:(id)arg2 imageType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

