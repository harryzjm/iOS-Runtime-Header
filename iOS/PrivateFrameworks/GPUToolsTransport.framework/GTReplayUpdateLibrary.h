//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GTReplayUpdateLibrary
{
    CDUnion_afa92939 _dispatchUID;
    unsigned long long _streamRef;
    NSURL *_shaderURL;
    NSData *_shaderIR;
    NSString *_shaderSource;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shaderSource; // @synthesize shaderSource=_shaderSource;
@property(retain, nonatomic) NSData *shaderIR; // @synthesize shaderIR=_shaderIR;
@property(retain, nonatomic) NSURL *shaderURL; // @synthesize shaderURL=_shaderURL;
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

