//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ENAccountIdentity, ENGroupContext, IDSCloudKitContainer;

@interface IDSGroupContextControllerContent : NSObject
{
    IDSCloudKitContainer *_cloudKitContainer;
    ENGroupContext *_groupContext;
    ENAccountIdentity *_accountIdentity;
}

@property(retain, nonatomic) ENAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
@property(retain, nonatomic) ENGroupContext *groupContext; // @synthesize groupContext=_groupContext;
@property(retain, nonatomic) IDSCloudKitContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
- (void).cxx_destruct;

@end

