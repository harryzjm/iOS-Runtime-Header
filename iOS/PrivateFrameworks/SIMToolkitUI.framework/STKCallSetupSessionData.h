//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface STKCallSetupSessionData
{
    NSString *_phoneNumber;
    _Bool _isHighPriority;
}

@property(readonly, nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 phoneNumber:(id)arg2;

@end
