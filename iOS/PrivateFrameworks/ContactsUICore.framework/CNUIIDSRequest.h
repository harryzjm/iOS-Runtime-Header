//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNUIIDSRequest : NSObject
{
}

+ (id)validHandlesFromHandles:(id)arg1;
+ (id)validateHandles:(id)arg1 forService:(long long)arg2 scheduler:(id)arg3 queryControllerWrapper:(id)arg4;
+ (id)IDSResponseQueue;
+ (id)IDSServiceForService:(long long)arg1;
+ (_Bool)isDestinationAvailable:(id)arg1 givenStatusesByDestination:(id)arg2;
+ (id)resultsForIDSControllerResult:(id)arg1 handlesByDestination:(id)arg2;

@end
