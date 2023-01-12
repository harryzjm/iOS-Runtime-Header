//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "STKTextSessionData.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface STKCallSetupSessionData : STKTextSessionData
{
    NSString *_phoneNumber;
    _Bool _isHighPriority;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 simLabel:(id)arg2 phoneNumber:(id)arg3;

@end

