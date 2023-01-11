//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChronoServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet;

@interface CHSAvocadoDescriptorsBox : NSObject <NSSecureCoding>
{
    NSDictionary *_descriptorsByExtensionIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier; // @synthesize descriptorsByExtensionIdentifier=_descriptorsByExtensionIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *descriptors;
- (id)initWithDescriptors:(id)arg1;

@end
