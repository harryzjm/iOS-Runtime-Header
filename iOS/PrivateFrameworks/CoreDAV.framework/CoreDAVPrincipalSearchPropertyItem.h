//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CoreDAVItem, CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem
{
    CoreDAVItem *_prop;
    CoreDAVLeafItem *_descriptionItem;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVLeafItem *descriptionItem; // @synthesize descriptionItem=_descriptionItem;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
- (id)description;
- (id)init;

@end
