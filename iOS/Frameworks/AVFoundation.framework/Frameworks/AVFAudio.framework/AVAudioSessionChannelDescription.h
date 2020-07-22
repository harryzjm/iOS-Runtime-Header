//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVAudioSessionChannelDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreateArray:(id)arg1 portUID:(id)arg2;
+ (id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned int)arg3;
- (struct ChannelDescriptionImpl *)privateGetImplementation;
- (id)description;
@property(readonly) unsigned int channelLabel;
@property(readonly) unsigned long long channelNumber;
@property(readonly) NSString *owningPortUID;
@property(readonly) NSString *channelName;
- (unsigned long long)hash;
- (_Bool)isEqualToChannel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

