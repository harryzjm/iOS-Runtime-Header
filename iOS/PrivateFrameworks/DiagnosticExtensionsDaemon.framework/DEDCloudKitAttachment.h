//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

@interface DEDCloudKitAttachment : NSObject
{
    NSURL *_url;
    NSNumber *_fileSize;
}

- (void).cxx_destruct;
@property(retain) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSURL *url; // @synthesize url=_url;
- (id)initWithURL:(id)arg1;

@end
