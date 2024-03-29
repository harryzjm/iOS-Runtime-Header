//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshRequest.h"

@class MTTimer;

__attribute__((visibility("hidden")))
@interface COTimerRequest : COMeshRequest
{
    MTTimer *_timer;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MTTimer *timer; // @synthesize timer=_timer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimer:(id)arg1;

@end

