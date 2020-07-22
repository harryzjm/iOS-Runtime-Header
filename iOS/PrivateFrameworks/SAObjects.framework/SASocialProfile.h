//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceComparable-Protocol.h>
#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SASocialProfile <SAAceSerializable, SAAceComparable>
{
}

+ (id)socialProfileWithDictionary:(id)arg1 context:(id)arg2;
+ (id)socialProfile;
@property(copy, nonatomic) NSString *userName;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSString *serviceType;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

