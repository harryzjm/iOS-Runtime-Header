//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMStream-Protocol.h>

@class NSString;

@interface BMAppClipLaunchStream : NSObject <BMStream, BMSourceStream>
{
}

- (id)source;
@property(readonly, nonatomic) NSString *identifier;

@end
