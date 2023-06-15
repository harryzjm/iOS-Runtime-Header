//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface GTReplayShaderDebugRequest
{
    int _programDataVersion;
    CDUnknownBlockType _completionHandler;
    CDUnion_afa92939 _dispatchUID;
    NSData *_programData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *programData; // @synthesize programData=_programData;
@property(nonatomic) int programDataVersion; // @synthesize programDataVersion=_programDataVersion;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

