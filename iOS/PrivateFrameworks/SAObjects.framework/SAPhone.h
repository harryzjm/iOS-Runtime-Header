//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceComparable-Protocol.h>

@class NSNumber, NSString;

@interface SAPhone <SAAceComparable>
{
}

+ (id)phoneWithDictionary:(id)arg1 context:(id)arg2;
+ (id)phone;
@property(copy, nonatomic) NSNumber *pseudo;
@property(copy, nonatomic) NSString *number;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *favoriteVoice;
@property(copy, nonatomic) NSNumber *favoriteFacetimeAudio;
@property(copy, nonatomic) NSNumber *favoriteFacetime;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

