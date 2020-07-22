//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CoreDAVMultiStatusItem, NSSet;

@interface CoreDAVPropertyFindBaseTask
{
    CoreDAVMultiStatusItem *_multiStatus;
    NSSet *_propertiesToFind;
}

@property(retain, nonatomic) CoreDAVMultiStatusItem *multiStatus; // @synthesize multiStatus=_multiStatus;
@property(retain, nonatomic) NSSet *propertiesToFind; // @synthesize propertiesToFind=_propertiesToFind;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)getTotalFailureError;
- (void)updateMultiStatusFromResponse;
- (id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)additionalHeaderValues;
- (id)parseHints;
- (id)description;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;

@end

