//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSError;

__attribute__((visibility("hidden")))
@interface GTReplayUpdateResult
{
    CDUnion_afa92939 _dispatchUID;
    unsigned long long _streamRef;
    NSDictionary *_updatePipelines;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *updatePipelines; // @synthesize updatePipelines=_updatePipelines;
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

