//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPImage, NSString, NSURL;

@interface LPCustomLinkMetadata : NSObject
{
    NSURL *_URL;
    NSString *_title;
    LPImage *_icon;
    LPImage *_image;
}

@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)dataRepresentation;

@end
