//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKSoundBuffer : NSObject
{
    unsigned int _bufferId;
    NSString *_path;
    double _duration;
}

+ (id)bufferWithFileNamed:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned int bufferId;
- (id)description;
- (id)init;

@end
