//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CTKClientSEP_TKBERTLVRecord
{
}

+ (id)parseFromDataSource:(id)arg1;
+ (id)dataForTag:(unsigned long long)arg1;
+ (unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char *)arg2;
+ (id)zuluDateFormatter;
- (id)initWithTag:(unsigned long long)arg1 records:(id)arg2;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1;

@end
