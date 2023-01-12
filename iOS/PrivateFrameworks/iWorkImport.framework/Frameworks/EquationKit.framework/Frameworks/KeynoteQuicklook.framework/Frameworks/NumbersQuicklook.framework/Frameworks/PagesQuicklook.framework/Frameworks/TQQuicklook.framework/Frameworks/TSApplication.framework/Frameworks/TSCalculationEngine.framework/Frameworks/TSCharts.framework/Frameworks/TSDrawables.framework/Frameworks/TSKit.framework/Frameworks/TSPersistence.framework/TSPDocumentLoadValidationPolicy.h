//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSPDocumentLoadValidationPolicy : NSObject
{
    _Bool _validateModel;
    _Bool _validateDataCRC;
    _Bool _validateDataDigest;
    _Bool _scanForOSLikeCorruption;
    long long _timing;
}

+ (id)loadValidationPolicyWithTiming:(long long)arg1 validateModel:(_Bool)arg2 validateDataCRC:(_Bool)arg3 validateDataDigest:(_Bool)arg4 scanForOSLikeCorruption:(_Bool)arg5;
@property(readonly, nonatomic) _Bool scanForOSLikeCorruption; // @synthesize scanForOSLikeCorruption=_scanForOSLikeCorruption;
@property(readonly, nonatomic) _Bool validateDataDigest; // @synthesize validateDataDigest=_validateDataDigest;
@property(readonly, nonatomic) _Bool validateDataCRC; // @synthesize validateDataCRC=_validateDataCRC;
@property(readonly, nonatomic) _Bool validateModel; // @synthesize validateModel=_validateModel;
@property(readonly, nonatomic) long long timing; // @synthesize timing=_timing;
- (id)description;
- (id)initWithTiming:(long long)arg1 validateModel:(_Bool)arg2 validateDataCRC:(_Bool)arg3 validateDataDigest:(_Bool)arg4 scanForOSLikeCorruption:(_Bool)arg5;

@end
