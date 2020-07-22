//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TLSystemSound : NSObject
{
    unsigned int _soundID;
    _Bool _shouldDisposeOfSoundID;
    NSURL *_soundFileURL;
}

@property(readonly, nonatomic) NSURL *soundFileURL; // @synthesize soundFileURL=_soundFileURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int soundID;
- (id)description;
- (void)dealloc;
- (id)initWithSoundFileURL:(id)arg1 soundID:(unsigned int)arg2;

@end

