//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMCaptureCallbackReceipt : NSObject
{
    long long _callback;
    double _secondsSinceBegin;
}

@property(readonly, nonatomic) double secondsSinceBegin; // @synthesize secondsSinceBegin=_secondsSinceBegin;
@property(readonly, nonatomic) long long callback; // @synthesize callback=_callback;
- (id)initWithCallback:(long long)arg1 duration:(double)arg2;

@end
