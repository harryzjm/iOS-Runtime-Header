//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshRequest.h"

__attribute__((visibility("hidden")))
@interface _COMeshControllerPing : COMeshRequest
{
    double _responseTimeout;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double responseTimeout; // @synthesize responseTimeout=_responseTimeout;
- (id)initWithTimeout:(double)arg1;

@end

