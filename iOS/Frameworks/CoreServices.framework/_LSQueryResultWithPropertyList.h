//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSQueryResultWithPropertyList
{
    id _propertyList;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) id propertyList; // @synthesize propertyList=_propertyList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)propertyListWithClass:(Class)arg1 valuesOfClass:(Class)arg2;
- (id)propertyListWithClass:(Class)arg1;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;

@end
