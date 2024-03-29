//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface GTReplayProfileRequest
{
    unsigned int _priority;
    int _profileDataVersion;
    CDUnknownBlockType _streamHandler;
    NSData *_profileData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) int profileDataVersion; // @synthesize profileDataVersion=_profileDataVersion;
@property(retain, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(copy, nonatomic) CDUnknownBlockType streamHandler; // @synthesize streamHandler=_streamHandler;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

