//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface STKNotifySessionData
{
    long long _notifyType;
}

@property(readonly, nonatomic) long long notifyType; // @synthesize notifyType=_notifyType;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 simLabel:(id)arg2 notifyType:(long long)arg3;

@end
