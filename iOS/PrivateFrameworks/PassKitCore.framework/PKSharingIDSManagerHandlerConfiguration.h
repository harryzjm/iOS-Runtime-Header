//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKSharingIDSManagerHandlerConfiguration : NSObject
{
    unsigned long long _sharingGroup;
    NSString *_handle;
    NSString *_accountIdentifier;
    NSString *_altDSID;
    unsigned long long _accessLevel;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) unsigned long long sharingGroup; // @synthesize sharingGroup=_sharingGroup;
- (id)description;
- (id)initWithSharingGroup:(unsigned long long)arg1;

@end
