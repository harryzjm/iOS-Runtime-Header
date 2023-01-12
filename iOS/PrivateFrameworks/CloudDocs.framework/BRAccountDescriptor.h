//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocs/NSSecureCoding-Protocol.h>

@class NSString;

@interface BRAccountDescriptor : NSObject <NSSecureCoding>
{
    NSString *_personaIdentifier;
    _Bool _isDataSeparated;
    NSString *_accountIdentifier;
    NSString *_organizationName;
}

+ (_Bool)mightHaveDataSeparatedAccountDescriptor;
+ (id)accountDescriptorForPersonaID:(id)arg1;
+ (id)accountDescriptorForURL:(id)arg1;
+ (id)allLoggedInAccountDescriptors;
+ (void)clearAccountDescriptorCache;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) _Bool isDataSeparated; // @synthesize isDataSeparated=_isDataSeparated;
- (id)description;
- (id)personaIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonaIdentifier:(id)arg1 accountIdentifier:(id)arg2 organizationName:(id)arg3 dataSeparated:(_Bool)arg4;

@end
