//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMutableApplicationSceneSettings.h>

#import <CarPlayUIServices/CRSUIProxyApplicationSceneSettings-Protocol.h>

@class NSString;

@interface CRSUIMutableProxyApplicationSceneSettings : UIMutableApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>
{
}

@property(nonatomic) _Bool proxiedApplicationLinkedOnOrAfterYukon;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
