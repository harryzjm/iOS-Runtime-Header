//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TVPBoundaryTimeObserverInfo : NSObject
{
    NSArray *_times;
    CDUnknownBlockType _handler;
    id _tokenFromAVPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id tokenFromAVPlayer; // @synthesize tokenFromAVPlayer=_tokenFromAVPlayer;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSArray *times; // @synthesize times=_times;

@end

