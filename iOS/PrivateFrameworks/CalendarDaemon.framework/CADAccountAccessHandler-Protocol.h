//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@protocol CADAccountAccessHandler
- (void)reset;
- (NSSet *)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(NSString *)arg2;
- (_Bool)isAccountManaged:(NSString *)arg1;
@end

