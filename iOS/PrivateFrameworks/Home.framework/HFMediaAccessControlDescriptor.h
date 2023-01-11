//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSString;

@interface HFMediaAccessControlDescriptor : NSObject <NAIdentifiable>
{
    _Bool _accessRequiresPassword;
    unsigned long long _access;
    NSString *_accessPassword;
}

+ (id)na_identity;
+ (_Bool)accessClassificationSupportsPassword:(unsigned long long)arg1;
+ (id)descriptorWithAccess:(unsigned long long)arg1 requiresPassword:(_Bool)arg2 password:(id)arg3;
+ (id)defaultAccessControl;
@property(readonly, copy, nonatomic) NSString *accessPassword; // @synthesize accessPassword=_accessPassword;
@property(readonly, nonatomic) _Bool accessRequiresPassword; // @synthesize accessRequiresPassword=_accessRequiresPassword;
@property(readonly, nonatomic) unsigned long long access; // @synthesize access=_access;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool accessSupportsPassword;
- (id)init;
- (id)initWithAccess:(unsigned long long)arg1 requiresPassword:(_Bool)arg2 password:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

