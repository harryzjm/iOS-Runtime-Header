//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SAAceSerializable;

@interface SABackgroundUpdateRequest
{
}

+ (id)backgroundUpdateRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)backgroundUpdateRequest;
- (_Bool)requiresResponse;
@property(retain, nonatomic) id <SAAceSerializable> attachment;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

