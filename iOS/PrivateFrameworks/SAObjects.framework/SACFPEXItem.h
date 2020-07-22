//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SACFPEXItem <SAAceSerializable>
{
}

+ (id)itemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)item;
@property(copy, nonatomic) NSString *sourceIdentifier;
@property(copy, nonatomic) NSNumber *score;
@property(copy, nonatomic) NSString *itemSource;
@property(copy, nonatomic) NSString *identifier;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

