//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NEHotspotConfigurationManager : NSObject
{
}

+ (id)sharedManager;
- (void)getConfiguredSSIDsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeConfigurationForHS20DomainName:(id)arg1;
- (void)removeConfigurationForSSID:(id)arg1;
- (void)applyConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)errorWithCode:(long long)arg1;
- (id)serializeConfiguration:(id)arg1;

@end

