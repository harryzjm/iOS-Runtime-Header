//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ILClassificationReportRequest : NSObject <NSSecureCoding>
{
    NSString *_extensionIdentifier;
    NSDictionary *_jsonDictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(readonly, copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithExtensionIdentifier:(id)arg1 jsonDictionary:(id)arg2;

@end
