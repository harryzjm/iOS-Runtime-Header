//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CEMApplicationListInstalledApplicationsCommand_Status
{
    NSArray *_statusInstalledApplicationList;
}

+ (id)buildRequiredOnlyWithInstalledApplicationList:(id)arg1;
+ (id)buildWithInstalledApplicationList:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusInstalledApplicationList; // @synthesize statusInstalledApplicationList=_statusInstalledApplicationList;
- (void).cxx_destruct;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

