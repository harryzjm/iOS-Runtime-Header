//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection
{
    unsigned long long eventMask;
}

@property unsigned long long eventMask; // @synthesize eventMask;
- (id)description;
- (void)connectForSimulator;
- (void)connect;
@property(readonly) SEL action;
@property(readonly) id target;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

