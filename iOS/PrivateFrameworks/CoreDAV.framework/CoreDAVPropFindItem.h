//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CoreDAVItem, CoreDAVItemWithNoChildren;

@interface CoreDAVPropFindItem
{
    CoreDAVItemWithNoChildren *_propName;
    CoreDAVItemWithNoChildren *_allProp;
    CoreDAVItem *_include;
    CoreDAVItem *_prop;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
@property(retain, nonatomic) CoreDAVItem *include; // @synthesize include=_include;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *allProp; // @synthesize allProp=_allProp;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *propName; // @synthesize propName=_propName;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

