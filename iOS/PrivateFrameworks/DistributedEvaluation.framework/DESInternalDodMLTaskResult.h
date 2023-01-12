//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSURL;

@interface DESInternalDodMLTaskResult : NSObject
{
    _Bool _deferred;
    NSDictionary *_JSONResult;
    NSData *_binaryResult;
    NSURL *_deferralURL;
    double _duration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSURL *deferralURL; // @synthesize deferralURL=_deferralURL;
@property(readonly, nonatomic) _Bool deferred; // @synthesize deferred=_deferred;
@property(readonly, nonatomic) NSData *binaryResult; // @synthesize binaryResult=_binaryResult;
@property(readonly, nonatomic) NSDictionary *JSONResult; // @synthesize JSONResult=_JSONResult;
- (id)description;
- (id)initWithJSONResult:(id)arg1 binaryResult:(id)arg2 deferred:(_Bool)arg3 deferralURL:(id)arg4 duration:(double)arg5;

@end
