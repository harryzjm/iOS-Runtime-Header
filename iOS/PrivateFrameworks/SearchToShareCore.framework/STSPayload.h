//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface STSPayload : NSObject
{
    NSURL *_imageURL;
    NSURL *_videoURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;

@end
