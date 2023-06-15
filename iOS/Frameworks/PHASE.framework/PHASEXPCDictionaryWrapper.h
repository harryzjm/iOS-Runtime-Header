//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface PHASEXPCDictionaryWrapper : NSObject
{
    NSObject<OS_xpc_object> *_dictionary;
}

+ (_Bool)supportsSecureCoding;
+ (id)wrapperWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *dictionary; // @synthesize dictionary=_dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

