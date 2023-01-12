//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>
#import <NanoTimeKitCompanion/NTKArgonJSONEncodable-Protocol.h>

@class NSDictionary, NSString;

@interface NTKArgonKeyDescriptor : NSObject <NSSecureCoding, NSCopying, NTKArgonJSONEncodable>
{
    NSString *_key;
    NSString *_fileName;
}

+ (_Bool)supportsSecureCoding;
+ (id)unfilteredKeyDescriptorFromBundle:(id)arg1;
+ (id)keyDescriptorFromBundle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (id)argon_initWithJSONRepresentation:(id)arg1;
@property(readonly, nonatomic) NSDictionary *argon_JSONRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithKey:(id)arg1 fileName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
