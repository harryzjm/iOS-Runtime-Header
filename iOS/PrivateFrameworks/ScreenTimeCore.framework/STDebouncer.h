//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STDebouncerDelegate;

@interface STDebouncer : NSObject
{
    id <STDebouncerDelegate> _delegate;
    double _minCoalescenceInterval;
    double _maxCoalescenceInterval;
    id _value;
}

- (void).cxx_destruct;
@property(retain) id value; // @synthesize value=_value;
@property(nonatomic) double maxCoalescenceInterval; // @synthesize maxCoalescenceInterval=_maxCoalescenceInterval;
@property(nonatomic) double minCoalescenceInterval; // @synthesize minCoalescenceInterval=_minCoalescenceInterval;
@property(nonatomic) __weak id <STDebouncerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_delegate;
- (void)_timeout;
- (void)_idle;
- (void)bounce:(id)arg1;
- (id)initWithMinCoalescenceInterval:(double)arg1 maxCoalescenceInterval:(double)arg2;

@end
