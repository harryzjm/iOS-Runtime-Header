//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVCurrentUserPrincipalItem
{
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // @synthesize unauthenticated=_unauthenticated;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (id)description;
- (id)init;

@end
