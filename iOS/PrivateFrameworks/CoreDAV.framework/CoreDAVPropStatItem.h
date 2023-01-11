//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CoreDAVErrorItem, CoreDAVItem, CoreDAVLeafItem;

@interface CoreDAVPropStatItem
{
    CoreDAVLeafItem *_status;
    CoreDAVItem *_prop;
    CoreDAVErrorItem *_errorItem;
    CoreDAVLeafItem *_responseDescription;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVLeafItem *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) CoreDAVErrorItem *errorItem; // @synthesize errorItem=_errorItem;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
@property(retain, nonatomic) CoreDAVLeafItem *status; // @synthesize status=_status;
- (id)description;
- (id)init;

@end
