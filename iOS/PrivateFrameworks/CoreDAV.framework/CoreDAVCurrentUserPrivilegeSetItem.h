//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem
{
    NSMutableSet *_privileges;
}

+ (id)copyParseRules;
@property(retain, nonatomic) NSMutableSet *privileges; // @synthesize privileges=_privileges;
- (void).cxx_destruct;
- (_Bool)hasPrivilegeWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addPrivilege:(id)arg1;
- (id)description;
- (id)init;

@end
