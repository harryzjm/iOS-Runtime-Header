//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTPowerAssertion : NSObject
{
    NSString *_name;
    double _assertionTimeout;
}

@property(readonly, nonatomic) double assertionTimeout; // @synthesize assertionTimeout=_assertionTimeout;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)releaseAssertion;
- (void)takeAssertion;
- (void)dealloc;
- (id)initWithName:(id)arg1 assertionTimeout:(double)arg2;
- (id)initWithName:(id)arg1;

@end

