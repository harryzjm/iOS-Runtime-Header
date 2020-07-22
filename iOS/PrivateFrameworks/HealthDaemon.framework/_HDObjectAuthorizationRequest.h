//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

@interface _HDObjectAuthorizationRequest : NSObject
{
    NSUUID *_identifier;
    NSArray *_samples;
    NSArray *_authorizationRecords;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSArray *authorizationRecords; // @synthesize authorizationRecords=_authorizationRecords;
@property(readonly, copy, nonatomic) NSArray *samples; // @synthesize samples=_samples;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *samplesRequiringAuthorization;
- (void)invokeCompletionHandlerWithAuthorizedSamples:(id)arg1 error:(id)arg2;
- (void)invokeCompletionWithSuccess:(_Bool)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id)arg4;
- (id)initForSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

