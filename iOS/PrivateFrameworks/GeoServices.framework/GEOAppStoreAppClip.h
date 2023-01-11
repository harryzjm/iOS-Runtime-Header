//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface GEOAppStoreAppClip : NSObject
{
    NSString *_bundleID;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_appClipURL;
    NSURL *_artworkURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(retain, nonatomic) NSURL *appClipURL; // @synthesize appClipURL=_appClipURL;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;
- (id)initWithBundleID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 appClipURL:(id)arg4 artworkURL:(id)arg5;

@end
