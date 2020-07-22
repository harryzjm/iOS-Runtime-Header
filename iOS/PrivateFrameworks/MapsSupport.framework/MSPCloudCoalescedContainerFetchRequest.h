//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface MSPCloudCoalescedContainerFetchRequest : NSObject
{
    NSArray *_zoneNamesToFetch;
    NSArray *_correspondingContainersToFetchFrom;
    NSUUID *_accountIdentity;
    long long _qualityOfService;
    long long _expectedTransferSize;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, nonatomic) long long expectedTransferSize; // @synthesize expectedTransferSize=_expectedTransferSize;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) NSUUID *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
@property(readonly, nonatomic) NSArray *correspondingContainersToFetchFrom; // @synthesize correspondingContainersToFetchFrom=_correspondingContainersToFetchFrom;
@property(readonly, nonatomic) NSArray *zoneNamesToFetch; // @synthesize zoneNamesToFetch=_zoneNamesToFetch;
- (void).cxx_destruct;
- (void)invokeSuccessHandlerBySourcingFromResults:(id)arg1 zonesRequiringCopy:(id)arg2;
- (id)initWithZoneNamesToFetch:(id)arg1 inSeparateContainers:(id)arg2 accountIdentity:(id)arg3 qualityOfService:(long long)arg4 expectedTransferSize:(long long)arg5 successHandler:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;

@end
