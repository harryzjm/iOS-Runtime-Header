//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DAEditPropertyAction
{
    NSString *_propertyName;
    NSString *_value;
    NSString *_propertyNamespace;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *propertyNamespace; // @synthesize propertyNamespace=_propertyNamespace;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChangedItem:(id)arg1 propertyName:(id)arg2 value:(id)arg3 propertyNamespace:(id)arg4 serverId:(id)arg5;

@end
