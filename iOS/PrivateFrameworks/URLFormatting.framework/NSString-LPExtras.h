//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (LPExtras)
+ (void)_lp_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_lp_userVisibleHost;
- (id)_lp_stringByTrimmingWhitespace;
- (id)_lp_stringByDeletingUsernameAndPassword;
- (id)_lp_stringByDeletingTrailingSlash;
- (id)_lp_hostByStrippingTopLevelDomain;
- (id)_lp_stringForcingLeftToRightDirection;
- (_Bool)_lp_hasCaseInsensitivePrefix:(id)arg1;
- (id)_lp_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2;
- (id)_lp_highLevelDomainFromHost;
- (unsigned long long)_lp_lengthOfDeepSubdomainsFromComponents:(id)arg1;
- (id)_lp_highLevelDomainFromComponents:(id)arg1 indexOfFirstHighLevelDomainComponent:(unsigned long long *)arg2 indexOfFirstTopLevelDomainComponent:(unsigned long long *)arg3;
- (_Bool)_lp_hasCaseInsensitiveSubstring:(id)arg1 startingAt:(unsigned long long)arg2;
@end

